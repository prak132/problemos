#include <bits/stdc++.h>
using namespace std;

void setIO(string name = "") {
	if (name.size()) {
		freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
}


void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {cin >> a[i];}
    
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
    setIO("io");
    int t; cin >> t;
    while (t--) {solve();}
    return 0;
}