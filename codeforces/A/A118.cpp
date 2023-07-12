#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    string s, d = ".";cin >> s;
    string result;
    for (int i = 0; i < s.size(); i++) {
        char c = tolower(s[i]);
        if (c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i') {
            continue;
        } result += d;
        result += c;
    } cout << result << '\n';
    return 0;
}