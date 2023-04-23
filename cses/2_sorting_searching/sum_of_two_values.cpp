#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
	int n, x;
	cin >> n >> x;
	vector<int> ar(n);
	for (int i = 0; i < n; i++) { cin >> ar[i]; }
	map<int, int> m;
	for (int i = 0; i < n; i++) {
		if (m.count(x - ar[i])) {
			cout << m[x-ar[i]] << " " << i + 1 << endl;
			return 0;
		}
		m[ar[i]] = i + 1;
	}

	cout << "IMPOSSIBLE" << endl;
}