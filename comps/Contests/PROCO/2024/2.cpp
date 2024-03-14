#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve() {
    int n; cin >> n; vi h(n);
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    } sort(h.begin(), h.end());
    vi psum(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        psum[i + 1] = psum[i] + h[i];
    } for (int k = 1; k <= n; ++k) {
        cout << psum[k] << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}