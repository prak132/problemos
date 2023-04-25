#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    string s;
    cin >> s;

    int x = 0, y = 0;
    int dx = 0, dy = 0;
    int cnt = 0;
    char prev = ' ';

    for (char c : s) {
        if (c == prev) {
            cnt++;
        } else {
            if (prev == '>') dx += (cnt >= 3 ? 20 + 5 * (cnt - 3) : 2 * cnt);
            if (prev == '<') dx -= (cnt >= 3 ? 20 + 5 * (cnt - 3) : 2 * cnt);
            if (prev == '^') dy += (cnt >= 3 ? 20 + 5 * (cnt - 3) : 2 * cnt);
            if (prev == 'v') dy -= (cnt >= 3 ? 20 + 5 * (cnt - 3) : 2 * cnt);
            prev = c;
            cnt = 1;
        }
    }

    if (prev == '>') dx += (cnt >= 3 ? 20 + 5 * (cnt - 3) : 2 * cnt);
    if (prev == '<') dx -= (cnt >= 3 ? 20 + 5 * (cnt - 3) : 2 * cnt);
    if (prev == '^') dy += (cnt >= 3 ? 20 + 5 * (cnt - 3) : 2 * cnt);
    if (prev == 'v') dy -= (cnt >= 3 ? 20 + 5 * (cnt - 3) : 2 * cnt);

    cout << "(" << dx << "," << dy << ")" << endl;
    return 0;
}
