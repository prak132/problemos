#include <bits/stdc++.h>
using namespace std;

void setIO(string name = "") {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	if (name.size()) {
		freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

void solve() {
    int n, k;
    cin >> n >> k;
    int curr = 1;
    for (int i = 0; i < n; i++) {
        int a; cin>> a;
        if (a == curr) curr++;
    } cout << ((n-curr)+k)/k << endl;
}

int main() {
    setIO();
    int t; cin >> t;
    while(t--){solve();}
    return 0;
}
    