#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

// 1. 構造体の定義
struct Point {
    int r, c;
};

// 2. 移動用配列の定義
const int dr[4] = {-1, 1, 0, 0};
const int dc[4] = {0, 0, -1, 1};

// 3. 現在滞在中のグループを管理する構造体
struct Group {
    int id;
    int T; // 退去時刻
    vector<Point> cells; // 占有中のマス
};

/**
 * P マス分の連結な空き芝生マスを探す関数 (BFS)
 */
bool find_placement(int N, int P, const vector<string>& grid, const vector<vector<int>>& occupied, vector<Point>& assigned_cells) {
    assigned_cells.clear();

    for (int r = 0; r < N; ++r) {
        for (int c = 0; c < N; ++c) {
            // 芝生かつ未占有マスから探索スタート
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

                // P マス分確保できたら成功
                if ((int)current_cells.size() == P) {
                    assigned_cells = current_cells;
                    return true;
                }
            }
        }
    }

    return false;
}

int main() {
    // 入出力の高速化
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    double R;
    if (!(cin >> N >> M >> R)) return 0;

    vector<string> grid(N);
    for (int i = 0; i < N; ++i) {
        cin >> grid[i];
    }

    // マスの占有状況 (-1: 空き, >=0: グループID)
    vector<vector<int>> occupied(N, vector<int>(N, -1));
    
    // 現在滞在中のグループリスト
    vector<Group> active_groups;

    for (int step = 0; step < M; ++step) {
    int id, S, T, P, V;
    cin >> id >> S >> T >> P >> V; // ★読むだけ！(cout しない)

    // 1. 退去処理（裏で処理するだけ。出力は不要）
    vector<Group> remaining_groups;
    for (const auto& g : active_groups) {
        if (g.T < S) {
            for (const auto& p : g.cells) occupied[p.r][p.c] = -1;
        } else {
            remaining_groups.push_back(g);
        }
    }
    active_groups = remaining_groups;

    // 2. 移動の出力（移動なしなので 0 だけを出力）
    cout << 0 << "\n";

    // 3. 配置場所の決定と Yes/No の出力
    vector<Point> assigned_cells;
    bool success = find_placement(N, P, grid, occupied, assigned_cells);

    if (success) {
        cout << "Yes\n"; // ★ここで Yes を出す
        for (const auto& p : assigned_cells) {
            cout << p.r << " " << p.c << "\n"; // 座標を出力
            occupied[p.r][p.c] = id;
        }
        active_groups.push_back({id, T, assigned_cells});
    } else {
        cout << "No\n"; // ★ここで No を出す
    }

    // 最後にまとめてフラッシュ
    cout << flush;
}   

    return 0;
}