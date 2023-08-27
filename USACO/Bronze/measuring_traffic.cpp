#include <bits/stdc++.h>
using namespace std;

void setIO(string name = "") {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	if (name.size()) {
		freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

int main() {
    setIO("io");
	int n; cin >> n;
	string type[100];
	int l[200], u[200];
	for (int i = 0; i < n; i++) {cin >> type[i] >> l[i] >> u[i];}
	// ill finish later
    return 0;
}