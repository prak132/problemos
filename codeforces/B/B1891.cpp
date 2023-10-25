#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, q;cin >> n >> q;
    int a[n], x[q];
    for (int i = 0; i < n; i++) {cin >> a[i];}
    for (int i = 0; i < q; i++) {cin >> x[i];} 
    int minProcessed = 31;
    for (int i = 0; i < q; i++) {
        if (x[i] < 31) {
            for (int j = 0; j < n; j++) {
                if (a[j] % (1 << x[i]) == 0) {
                    a[j] += (1 << (x[i] - 1));
                }
            }
            minProcessed = x[i];
        }
    } for (int x : a) {
        cout << x << ' ';
    } cout << '\n';
}


signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t;cin >> t;
    while (t--) {solve();}
    return 0;
}

