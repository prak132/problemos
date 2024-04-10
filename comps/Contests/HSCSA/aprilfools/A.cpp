#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
const int MOD = 1000000007;

void solve() {
    int n; cin >> n;
    vector<int> counts(32, 0);
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        for (int j = 0; j < 32; ++j) {
            if (x & (1 << j)) {
                counts[j]++;
            }
        }
    } ll sum = 0;
    ll pdc = 1;
    for (int i = 0; i < 32; ++i) {
        if (counts[i] == n) {
            sum += (1LL << i);
        }
        pdc = (pdc *(counts[i] + 1)) % MOD;
    } cout << (sum%MOD+pdc%MOD)%MOD << endl;
}


int main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t=1; 
    // cin >> t;
    while (t--) {solve();}
    return 0;
}