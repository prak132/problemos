#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        int bigness = s.size()-1;
        if (s.size() > 10) {
            cout << s[0] << s.size()-2 << s[bigness] << endl;
        } else {
            cout << s << endl;
        }
    }
    return 0;
}