#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, cnt = 0;cin >> n;
    vector<string> m(n);
    for (int i = 0; i < n; i++) {cin >> m[i];}
    for (int i = 0; i < n / 2; ++i) {
        for (int j = 0; j < n / 2; ++j) {
            vector<char> chars = {
                m[i][j],
                m[n - 1 - j][i],
                m[n - 1 - i][n - 1 - j],
                m[j][n - 1 - i]
            }; char mc = *max_element(chars.begin(), chars.end());
            for (int k = 0; k < 4; ++k) {
                if (chars[k] != mc) {
                    cnt += mc - chars[k];
                }
            }
        }
    } cout << cnt << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t;cin >> t;
    while (t--) {solve();}
    return 0;
}
