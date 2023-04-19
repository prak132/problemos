#include <bits/stdc++.h>
#define pb push_back
#define endl "\n"
#define int long long

using namespace std;
int n;

signed main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	cin >> n;
	vector<int> x(n), y(n);
	for (int &t : x) { cin >> t; }
	for (int &t : y) { cin >> t; }
	int max_squared = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int dx = x[i] - x[j];
			int dy = y[i] - y[j];
			int square = dx * dx + dy * dy;
			max_squared = max(max_squared, square);
		}
	}
	cout << max_squared << endl;
}