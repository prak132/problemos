#include <bits/stdc++.h>
using namespace std;

void solve() {
    int q; cin >> q;
    vector<int> dp; // frfrfrrfrfrfr this is dp no capcpapc right awesomeparrot
    int cnt = 0;
    for (int i = 0; i < q; i++) {
        int x; cin >> x;
        int cnt2 = cnt + (!dp.empty() && dp.back() > x);
        if (cnt2 == 0 || (cnt2 == 1 && x <= dp[0])) {
            dp.push_back(x); cnt = cnt2;
            cout << '1';
        } else {
            cout << '0';
        }
    } cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    } return 0;
}
