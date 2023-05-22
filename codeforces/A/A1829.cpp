#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        string cf = "codeforces";
        int cnt = 0;
        for (int i = 0; i < cf.length(); i++) {
            if (s[i] != cf[i]) {
                cnt++;
            }
        }
        if (s.length() > cf.length()) {
            cnt += s.length() - cf.length();
        }
        cout << cnt << '\n';
    }
    return 0;
}
