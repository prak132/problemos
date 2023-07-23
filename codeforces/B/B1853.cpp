#include <bits/stdc++.h>
using namespace std;
#define int long long
 
signed main() {
    int t; cin >> t;
    while(t--) {
        int n,k; cin >> n >> k;
        if (k > 30) {
            cout << 0 << endl; continue;
        } 
        int a = 1, b = 1;
        for (int i = 3; i < k; i++) {
            int tmp = b;
            b += a; a = tmp;
        }
        int ans = 0;
        for (int i = 0; i <= n; i++) {
            if ((n-i*a)%b) {continue;}
            int t = (n-i*a)/b;
            if (t >= i) {ans++;}
        } 
        cout << ans << endl;
    }
}
