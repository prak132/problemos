#include <bits/stdc++.h>
using namespace std;

bool is_lucky(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7) {
            return false;
        } n /= 10;
    } return true;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int y;
    cin >> y;
    for (int i = y; i >= 4; i--) {
        if (is_lucky(i)) {
            cout << i << endl;
            return 0;
        }
    } cout << -1 << endl;
    return 0;
}
