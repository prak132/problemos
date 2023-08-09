#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int m,n,k; cin >> m >> n >> k;
    for (int i = 0; i < m; i++) {
        string s; cin >> s;
        string ans;
        for (int j = 0; j < n; j++) {
            for (int l = 0; l < k; l++) {
                ans += s[j];
            }
        } for (int j = 0; j < k; j++) {
            cout << ans << "\n";
        }
    }
    return 0;
}