
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long d, n;
    if (!(cin >> d >> n)) return 0;
    vector<long> temp(d);
    for (int i = 0; i < d; i++) cin >> temp[i];
    vector<vector<long>> close(n, vector<long>(3));
    for (int i = 0; i < n; i++) cin >> close[i][0] >> close[i][1] >> close[i][2];

    vector<vector<long>> dp(d, vector<long>(n, -1));
    for (int i = 0; i < n; i++) {
        if (close[i][0] <= temp[0] && temp[0] <= close[i][1]) {
            dp[0][i] = 0;
        }
    }

    for (int i = 1; i < d; i++) {
        for (int j = 0; j < n; j++) {
            if (close[j][0] <= temp[i] && temp[i] <= close[j][1]) {
                for (int k = 0; k < n; k++) {
                    if (dp[i - 1][k] != -1) {
                        dp[i][j] = max(dp[i][j], dp[i - 1][k] + abs(close[j][2] - close[k][2]));
                    }
                }
            }
        }
    }

    long ans = 0;
    for (int j = 0; j < n; j++) {
        ans = max(ans, dp[d - 1][j]);
    }
    cout << ans << endl;
    return 0;
}
