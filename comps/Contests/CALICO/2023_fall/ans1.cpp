#include <bits/stdc++.h>
using namespace std;

void solve(int T, int delays[]) {
    for (int i = 0; i < T; ++i) {
        if (delays[i] == 0) {
            cout << "haha good one" << endl;
        } else if (delays[i] < 180) {
            int repetitions = delays[i] / 10;
            for (int j = 0; j < repetitions; ++j) {
                cout << "berkeley";
            }
            cout << "time" << endl;
        } else {
            cout << "canceled" << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    int delays[t];
    for (int i = 0; i < t; ++i) {
        cin >> delays[i];
    }
    solve(t, delays);

    return 0;
}
