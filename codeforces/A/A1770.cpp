#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n, m ; cin >> n >> m;
    int a[n]; int b[m];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    } sort(a+1,a+n+1);
    for (int i = 1; i <= m; i++){
        cin >> b[i];
        int p = min_element(a+1,a+n+1)-a;
        a[p] = b[i];
    } int ans = 0;
    for (int i = 1; i <= n; i++){
        ans += a[i];
    } cout << ans << '\n';
}
 
signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        solve();
    } return 0;
}