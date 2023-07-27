#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> mice(k);
    for (int i = 0; i < k; i++) {cin >> mice[i];}
    sort(mice.rbegin(), mice.rend());
    int cnt = 0, sum = 0;
    while (cnt < mice.size() && sum + n - mice[cnt] < n) {
        sum += n - mice[cnt++];
    } cout << cnt << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    } return 0;
}