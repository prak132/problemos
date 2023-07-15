#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n,ans = 0; cin >> n;
    multiset<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.insert(x);
    } while (!a.empty()) {
        ans += a.size();
        int m = *a.begin();
        a.erase(m);
    } cout << ans << endl;
    return 0;
}