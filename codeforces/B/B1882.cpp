#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define MAX 51

void solve() {
    int n,ans=0; cin >> n;
    int cnt[MAX] = {0};
    vector<ll> v(51, 0);
    for (int i = 0; i < n; i++) {
    	int m; cin >> m;
    	for (int j = 0; j < m; j++) {
    		int num; cin >> num;
    		v[i] |= 1ll << num;
    		cnt[num]++;
    	}
    } for (int i = 1; i < MAX; i++) {
    	if (cnt[i] == 0) continue;
    	ll moooosk = 0;
    	for (int j = 0; j < n; j++) {
    		if (!(v[j] >> i & 1)) moooosk |= v[j];
    	} ans = max(ans, __builtin_popcountll(moooosk));
    } cout << ans << endl;
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {solve();}
    return 0;
}