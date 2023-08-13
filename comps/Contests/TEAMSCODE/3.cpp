// prakhar
#include <bits/stdc++.h>
using namespace std;
int t;
string s;
int main() {
    cin >> t;
    while (t--) {
        cin >> s;
        char mx = 'a';
        for (char c : s) mx = max(mx, c);
        for (char c : s) if (c == mx) cout << c;
        cout << endl;
    }
}
