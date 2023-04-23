#include <bits/stdc++.h>
using namespace std;
//teammate tried
const int MOD = 1e9 + 7;

int main() {
    int n;
    string s;
    cin >> n >> s;

    vector<vector<int>> dp(n+1, vector<int>(n+1));
    dp[0][0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            if (s[i-1] == '(') {
                dp[i][j] = dp[i-1][j-1];
                if (j > 0) dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
            } else if (s[i-1] == ')') {
                dp[i][j] = dp[i-1][j+1];
                if (j > 0) dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
            } else {
                dp[i][j] = dp[i-1][j-1];
                if (j > 0) dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
                dp[i][j] = (dp[i][j] + dp[i-1][j+1]) % MOD;
            }
        }
    }

    int ans = 0;
    for (int j = 0; j <= n; j++) {
        if ((n+j)%2 == 0) {
            ans = (ans + dp[n][j]) % MOD;
        }
    }

    cout << ans << endl;
    return 0;
}
