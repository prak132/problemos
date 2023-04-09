#include <bits/stdc++.h>
using namespace std;
const int mod = 998244353;
vector<int> fib;
void generate_fibonacci(int n) {
    fib.assign(n+2, 0);
    fib[1] = fib[2] = 1;
    for (int i = 3; i <= n+1; i++) {
        fib[i] = (fib[i-1] + fib[i-2]) % mod;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        generate_fibonacci(n);
        vector<int> a(n, 0);
        for (int i = 0; i < q; i++) {
            int l, r;
            cin >> l >> r;
            for (int j = l-1; j < r; j++) {
                a[j] = (a[j] + fib[j-l+2]) % mod;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
