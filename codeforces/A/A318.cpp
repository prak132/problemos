#include <bits/stdc++.h>
#define endl "\n"
#define int long long

using namespace std;
int n,k;

void solve() {
    cin >> n >> k;
    if (k <= (n + 1) / 2) {
        cout << (k*2-1) << endl;
    }
    else {
        cout << ((k-(n+1)/2)*2) << endl;
    }
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}