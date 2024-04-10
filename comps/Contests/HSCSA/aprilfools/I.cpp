#include <bits/stdc++.h>
using namespace std;

void solve() {
	int x; cin >> x;
	int sum = 0;
	for (int i = 0; i < x; i++) {int a; cin >> a; sum+=a;}
	if (sum%2 == 0 && x % 2 == 1) {cout << "YES";}
	else {cout << "NO";}
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t=1; 
    // cin >> t;
    while (t--) {solve();}
    return 0;
}