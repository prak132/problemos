#include <bits/stdc++.h>
using namespace std;

void solve() {
	int x; cin >> x;
	int arr[x]; for (int i = 0; i < x; i++) {cin>>arr[i];}
	for (int z : arr) {
		if (z%2) {cout << "YES\n";}
		else {cout<<"NO\n";}
	}
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t=1; 
    // cin >> t;
    while (t--) {solve();}
    return 0;
}