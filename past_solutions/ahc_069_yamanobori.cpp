#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <random>
#include <ctime>

using namespace std;

struct Point {
    int r, c;
};

const int dr[4] = {-1, 1, 0, 0};
const int dc[4] = {0, 0, -1, 1};

struct Group {
    int id;
    int T;
    vector<Point> cells;
};

// 乱数生成器
static mt19937 rng(1337);

// 高速な境界線長(L)の計算 (O(P) で計算)
int calc_boundary_length(int N, const vector<Point>& cells, const vector<vector<bool>>& is_in) {
    int L = 0;
    for (const auto& p : cells) {
        for (int dir = 0; dir < 4; ++dir) {
            int nr = p.r + dr[dir];
            int nc = p.c + dc[dir];
            if (nr < 0 || nr >= N || nc < 0 || nc >= N || !is_in[nr][nc]) {
                L++;
            }
        }
    }
    return L;
}

// 連結性チェック (O(P))
bool is_connected(int N, int P, const vector<Point>& cells, const vector<vector<bool>>& is_in) {
    if (cells.empty()) return false;
    vector<vector<bool>> visited(N, vector<bool>(N, false));
    queue<Point> q;

    q.push(cells[0]);
    visited[cells[0].r][cells[0].c] = true;
    int count = 0;

    while (!q.empty()) {
        Point curr = q.front();
        q.pop();
        count++;

        for (int dir = 0; dir < 4; ++dir) {
            int nr = curr.r + dr[dir];
            int nc = curr.c + dc[dir];
            if (nr >= 0 && nr < N && nc >= 0 && nc < N) {
                if (is_in[nr][nc] && !visited[nr][nc]) {
                    visited[nr][nc] = true;
                    q.push({nr, nc});
                }
            }
        }
    }
    return count == P;
}

// BFSでの初期配置探索
bool find_initial_placement(int N, int P, const vector<string>& grid, const vector<vector<int>>& occupied, vector<Point>& assigned_cells) {
    assigned_cells.clear();

    for (int r = 0; r < N; ++r) {
        for (int c = 0; c < N; ++c) {
            if (grid[r][c] == '.' && occupied[r][c] == -1) {
                vector<Point> current_cells;
                vector<vector<bool>> visited(N, vector<bool>(N, false));
                queue<Point> q;

                q.push({r, c});
                visited[r][c] = true;

                while (!q.empty() && (int)current_cells.size() < P) {
                    Point curr = q.front();
                    q.pop();
                    current_cells.push_back(curr);

                    if ((int)current_cells.size() == P) break;

                    for (int dir = 0; dir < 4; ++dir) {
                        int nr = curr.r + dr[dir];
                        int nc = curr.c + dc[dir];

                        if (nr >= 0 && nr < N && nc >= 0 && nc < N) {
                            if (!visited[nr][nc] && grid[nr][nc] == '.' && occupied[nr][nc] == -1) {
                                visited[nr][nc] = true;
                                q.push({nr, nc});
                            }
                        }
                    }
                }

                if ((int)current_cells.size() == P) {
                    assigned_cells = current_cells;
                    return true;
                }
            }
        }
    }
    return false;
}

// 高速化された山登り法
void hill_climbing(int N, int P, const vector<string>& grid, const vector<vector<int>>& occupied, vector<Point>& cells, double time_limit_sec) {
    if (P <= 1) return;

    clock_t start_time = clock();

    // 選択状態を高速に参照するためのグリッド
    vector<vector<bool>> is_in(N, vector<bool>(N, false));
    for (const auto& p : cells) {
        is_in[p.r][p.c] = true;
    }

    int current_L = calc_boundary_length(N, cells, is_in);

    // 最大試行回数＋時間打ち切り設定
    int max_iters = 400;
    for (int iter = 0; iter < max_iters; ++iter) {
        // 定期的に時間判定（重くならないよう100回に1回）
        if (iter % 100 == 0) {
            double elapsed = (double)(clock() - start_time) / CLOCKS_PER_SEC;
            if (elapsed > time_limit_sec) break;
        }

        // 1. ランダムに1つ除外
        int remove_idx = rng() % P;
        Point remove_p = cells[remove_idx];

        is_in[remove_p.r][remove_p.c] = false;
        vector<Point> next_cells;
        for (int i = 0; i < P; ++i) {
            if (i != remove_idx) next_cells.push_back(cells[i]);
        }

        // 残り P-1 マスの連結性確認
        if (!is_connected(N, P - 1, next_cells, is_in)) {
            is_in[remove_p.r][remove_p.c] = true; // 元に戻す
            continue;
        }

        // 2. 隣接する空きマスから追加候補を収集
        vector<Point> candidates;
        for (const auto& p : next_cells) {
            for (int dir = 0; dir < 4; ++dir) {
                int nr = p.r + dr[dir];
                int nc = p.c + dc[dir];
                if (nr >= 0 && nr < N && nc >= 0 && nc < N) {
                    if (grid[nr][nc] == '.' && occupied[nr][nc] == -1 && !is_in[nr][nc]) {
                        candidates.push_back({nr, nc});
                    }
                }
            }
        }

        if (candidates.empty()) {
            is_in[remove_p.r][remove_p.c] = true; // 元に戻す
            continue;
        }

        Point add_p = candidates[rng() % candidates.size()];
        next_cells.push_back(add_p);
        is_in[add_p.r][add_p.c] = true;

        // 3. 評価
        int next_L = calc_boundary_length(N, next_cells, is_in);
        if (next_L < current_L) {
            // 改善したら採用
            current_L = next_L;
            cells = next_cells;
        } else {
            // 悪化したら元に戻す
            is_in[add_p.r][add_p.c] = false;
            is_in[remove_p.r][remove_p.c] = true;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    double R;
    if (!(cin >> N >> M >> R)) return 0;

    vector<string> grid(N);
    for (int i = 0; i < N; ++i) {
        cin >> grid[i];
    }

    vector<vector<int>> occupied(N, vector<int>(N, -1));
    vector<Group> active_groups;

    // 1ステップに割り当てる最大実行時間 (全体で2.0秒以内。安全に1ステップあたり1.5ms程度)
    double time_per_step = 1.0 / 1000.0;

    for (int step = 0; step < M; ++step) {
        int id, S, T, P, V;
        cin >> id >> S >> T >> P >> V;

        // 1. 退去処理
        vector<Group> remaining_groups;
        for (const auto& g : active_groups) {
            if (g.T < S) {
                for (const auto& p : g.cells) {
                    occupied[p.r][p.c] = -1;
                }
            } else {
                remaining_groups.push_back(g);
            }
        }
        active_groups = remaining_groups;

        // 2. 移動なし (0)
        cout << 0 << "\n";

        // 3. 配置・山登り
        vector<Point> assigned_cells;
        bool success = find_initial_placement(N, P, grid, occupied, assigned_cells);

        if (success) {
            // 時間制御付き山登り法
            hill_climbing(N, P, grid, occupied, assigned_cells, time_per_step);

            cout << "Yes\n";
            for (const auto& p : assigned_cells) {
                cout << p.r << " " << p.c << "\n";
                occupied[p.r][p.c] = id;
            }
            active_groups.push_back({id, T, assigned_cells});
        } else {
            cout << "No\n";
        }

        cout << flush;
    }

    return 0;
}