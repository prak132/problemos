#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int k,n,w; cin >> k >> n >> w;
    int ans = 0;
    for (int i=1; i <= w; i++) {
        ans = ans+(i*k);
    } if (ans <= n) {
        cout << "0\n";
    } else {
        cout << ans-n << '\n';
    }
    return 0;
}