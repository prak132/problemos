#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    if (s.size() < 2) {
        cout << s << endl;
        return 0;
    } for (int i = 0; i < s.size(); i += 2) {
        for (int j = i + 2; j < s.size(); j += 2) {
            if (s[i] == '3' && s[j] == '1') {
                swap(s[i], s[j]);
            }
        }
    } for (int i = 0; i < s.size(); i += 2) {
        for (int j = i + 2; j < s.size(); j += 2) {
            if (s[i] == '3' && s[j] == '2') {
                swap(s[i], s[j]);
            }
        }
    } for (int i = 0; i < s.size(); i += 2) {
        for (int j = i + 2; j < s.size(); j += 2) {
            if (s[i] == '2' && s[j] == '1') {
                swap(s[i], s[j]);
            }
        }
    }
    cout << s << endl;
    return 0;
}
