#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back

void solve() {
    int n; cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++) {
    	cin >> arr[i];
    }
    sort(arr,arr+n);
    vector<ll> b;
    for(int i=0; i < n/2; i++){
        b.pb(arr[i]);
        b.pb(arr[n-1-i]);
    }
    if(n % 2 == 1) {b.pb(arr[n/2]);}
    for(int i = b.size()-1; i>=0; i--) {cout << b[i] << " ";}
    cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {solve();}
    return 0;
}