#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x, a, b, c;
    cin >> x >> a >> b >> c;
    ll total = 0;
    while (a >= 0 && b >= 0 && c >= 0) {
        ll gas = x;
        ll temp = min((gas/4), c);
        gas -= temp*4;
        c -= temp;
        temp = min(gas/2, b);
        gas -= temp*2;
        b -= temp;
        temp = min(gas, a);
        gas -= temp;
        a -= temp;
        if (gas == 0) {
            total++;
        } else {
            if (gas < 2 && b != 0) {
                b--;
                total++;
                continue;
            } else if (c != 0) {
                c--;
                total++;
                continue;
            }
            break;
        }
    }
    cout << total << endl;
}