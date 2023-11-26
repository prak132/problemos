#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define MOD 1000000007


signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    ll n, m; cin >> n >> m;
    vector<vector<ll>> dp(n + 1, vector<ll>(m + 1, 0));
    for (ll i = 0; i <= n; i++) {
        dp[i][0] = 1;
    } for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= m; j++) {
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
        }
    } cout << dp[n][m] << endl;
    return 0;
}