#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; string s; cin >> n >> s;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int lhs = 0;
        if (i > 0 && s[i - 1] != s[i]) {
            lhs++;
            for (int k = i - 2; k >= 0 && s[k] == s[i - 1]; k--)
                lhs++;
        } int rhs = 0;
        if (i + 1 < n && s[i + 1] != s[i]) {
            rhs++;
            for (int k = i + 2; k < n && s[k] == s[i + 1]; k++)
                rhs++;
        }   ans += lhs * rhs + max(lhs - 1, 0LL) + max(rhs - 1, 0LL);
    } cout << ans << "\n";
    return 0;
}
