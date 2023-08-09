/*
ID: rathore6
TASK: beads
LANG: C++
*/

#include <bits/stdc++.h>
using namespace std;

// stuck in impl rn :sob:

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t,maxcollected=0; cin >> t;
    string s; cin >> s;
    s += s;
    for (int i = 1; i < t; i++) {
        int cnt = 0;
        char col = 'w';
        for (int j = i; j < i + t; ++j) {
            if (s[j] == 'w' || s[j] == col) {   
                cnt++;
                if (s[j] != 'w') col = s[j];
            } else {
                break;
            }
        } maxcollected = max(maxcollected, cnt);
    } cout << maxcollected << '\n';
    return 0;
}