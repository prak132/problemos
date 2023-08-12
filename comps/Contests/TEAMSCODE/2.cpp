// ryan

#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define debug(x) for(auto i : x) {cout << i << " ";} cout << endl;

using namespace std;

void setIO(string prob) {
	freopen((prob + ".in").c_str(), "r", stdin);
	freopen((prob + ".out").c_str(), "w", stdout);
}

void solve(){
    int n; cin >> n;

    int result = 0;

    for(int i = 0 ; i < n; i++){
        int a; cin >> a;
        if(a != i + 1){
            result = max(n - i, result);
        }
    }

    cout << result << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}