// ryan + prak

#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define debug(x) for(auto i : x) {cout << i << " ";} cout << endl;
#define int ll

using namespace std;

void setIO(string prob) {
	freopen((prob + ".in").c_str(), "r", stdin);
	freopen((prob + ".out").c_str(), "w", stdout);
}

void solve(){
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    vector<long long> dp_max(n);
    vector<long long> dp_min(n);
    
    dp_max[0] = max((long long)0, a[0]);
    dp_min[0] = min((long long)0, a[0]);
    
    for(int i = 1; i < n; ++i) {
        dp_max[i] = max(max(dp_max[i - 1] + a[i], dp_max[i - 1] * a[i]), dp_min[i-1] * a[i]);
        dp_min[i] = min(min(dp_max[i - 1] * a[i], dp_min[i - 1] * a[i]), dp_min[i-1] + a[i]);
    }
    
    cout << dp_max[n-1] << endl;

}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}