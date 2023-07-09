#include <bits/stdc++.h>
using namespace std;
int t, n, a[55], b[55];
int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i] >> b[i];
        int ans = n;
        for (int i = 1; i <= n; i++) {
            if (a[i] <= b[i]) ans--;
        } cout << ans << endl;
    } return 0;
}