// jason

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>
#include <set>
#include <unordered_map>
#include <map>
using namespace std;

#define int long long

void solve() {
    int l, r, x; cin >> l >> r >> x;
    int ans = 0;
    int a, b; a = 0; b = 0;
    if(x % 2 == 0) {
        a = x / 2;
        if(a <= r && a >= l) {
            ans += x/2 - l + 1;
        }
    }
    cout << ans << endl;
}

int32_t main() {
    // freopen ("filename.in", "r", stdin); freopen("filename.out", "w", stdout);
    int t; cin >> t;
    while(t--) {
        solve();
    }
}