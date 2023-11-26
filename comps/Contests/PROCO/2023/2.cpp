#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

ll factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

ll nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	int n, k; cin >> n >> k;
    ll res = 1;
    for (int i = 0; i < n; ++i) {
        res *= (k - i);
    } cout << res << endl;
    return 0;
}