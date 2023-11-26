#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int x, m, k; cin >> x >> m >> k;
    if (x > m) {
        cout << ((x-k) / m) << endl;
    } else {
        cout << 0 << endl;
    } return 0;
}
