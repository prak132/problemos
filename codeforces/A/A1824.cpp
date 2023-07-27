#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5+5;
 
void solve() {
    int n, m;
    cin >> n >> m;
    int a[N], seat[N] = {0};
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    } int cntL = 0, cntR = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == -1) ++cntL;
        else if (a[i] == -2) ++cntR;
        else ++seat[a[i]];
    } int nowL = 0, nowR = 0, vis = 0;
    for (int i = 1; i <= m; i++) {
        if (seat[i]) ++vis;
        else ++nowR;
    } int ans = max(cntL, cntR) + vis;
    for (int i = 1; i <= m; i++) {
        if (seat[i]) {
            int temp = min(cntL, nowL) + min(cntR, nowR) + vis;
            ans = max(ans, temp);
        }
        else {
            ++nowL;
            --nowR;
        }
    } ans = min(ans, m);
    cout << ans << "\n";
    for (int i = 1; i <= m; i++) {
        seat[i] = 0;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    } return 0;
}
