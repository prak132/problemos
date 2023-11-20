#include <iostream>
using namespace std;
#define MOD 3359232
#define int long long

int power(int base, int exp, int mod) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        } base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

void solve() {
    int N;cin >> N;
    int layers = N / 3;
    int result = (power(2, layers + 1, MOD) - 2 + MOD) % MOD;
    cout << result << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
