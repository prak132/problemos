#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

signed main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
    ll t; cin >> t;
	ll cnt = 0;
	for (ll i = 1; i * i <= t; ++i) {
		if (t % i == 0) {
			cnt++;
			if (i * i < t){
				cnt++;
			}
		}
	} cout << cnt << endl;
    return 0;
}