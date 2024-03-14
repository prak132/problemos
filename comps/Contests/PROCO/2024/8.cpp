#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 2e5 + 5;
const int MOD = 998244353;
vector<int> tree[MAXN];
int sz[MAXN];
ll fact[MAXN], inv[MAXN], dp[MAXN];

ll power(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    } return res;
}

void dfs(int v, int p) {
    sz[v] = 1;
    dp[v] = 1;
    for (int u : tree[v]) {
        if (u==p) continue;
        dfs(u,v);
        sz[v]+=sz[u];
        dp[v]=dp[v]*dp[u]%MOD*inv[sz[u]]%MOD;
    } dp[v]=dp[v]*fact[sz[v]-1]%MOD;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    fact[0]=inv[0]=1;
    for (int i = 1; i < MAXN; i++) {
        fact[i] = fact[i-1]* i%MOD;
        inv[i] = power(fact[i], MOD -2);
    } int n; cin>>n;
    for (int i = 1; i < n; i++) {
        int u, v; cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    } dfs(1, 0);
    // 0,1
    cout<<dp[1]<<'\n';
    return 0;
}