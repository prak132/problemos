/*
ID: rathore
TASK: friday
LANG: C++
*/

#include <bits/stdc++.h>
using namespace std;

bool checkleapyear(int year) {
    if (year % 100 == 0) {
        return year % 400 == 0;
    } else {
        return year % 4 == 0;
    }
}

int main() {
    freopen("friday.in", "r", stdin);
    freopen("friday.out", "w", stdout);
    int arr[7] = {0, 0, 0, 0, 0, 0, 0};
    int cday = 0;
    int nd[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int ld[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int years; cin >> years;
    for (int y = 1900; y < 1900 + years; y++) {
        for (int m = 0; m < 12; m++) {
            int wday = (cday + 12) % 7;
            arr[(wday + 2) % 7]++;
            cday += checkleapyear(y) ? ld[m] : nd[m];
        }
    }
    for (int i = 0; i < 7; i++) {
        if (i == 6) {
            cout << arr[i] << '\n';
        } else {
            cout << arr[i] << " ";
        }
    } return 0;
}