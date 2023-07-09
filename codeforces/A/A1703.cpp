#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    for (int i = 0; i < t; ++i) {
        string s; cin >> s;
        if (s[0] == 'Y' || s[0] == 'y') {
            if (s[1] == 'E' || s[1] == 'e') {
                if (s[2] == 'S' || s[2] == 's') {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
}
