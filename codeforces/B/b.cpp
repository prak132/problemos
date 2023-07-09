#include <bits/stdc++.h>
using namespace std;
int t;
char a[3][3];
bool check(char c) {
    for (int i = 0; i < 3; i++) {
        if (a[i][0] == c && a[i][1] == c && a[i][2] == c) return true;
        if (a[0][i] == c && a[1][i] == c && a[2][i] == c) return true;
    }
    if (a[0][0] == c && a[1][1] == c && a[2][2] == c) return true;
    if (a[0][2] == c && a[1][1] == c && a[2][0] == c) return true;
    return false;
}
int main() {
    cin >> t;
    while (t--) {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> a[i][j];
        if (check('X')) cout << "X" << endl;
        else if (check('O')) cout << "O" << endl;
        else if (check('+')) cout << "+" << endl;
        else cout << "DRAW" << endl;
    }
    return 0;
}