#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ls = 0, cs = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                cs++;
            } else {
                ls = max(ls, cs);
                cs = 0;
            }
        }
        ls = max(ls, cs);
        cout << ls << endl;
    }
    return 0;
}