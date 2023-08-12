#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("pails.in", "r", stdin);
	freopen("pails.out", "w", stdout);
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	int b1, b2, ord;
	cin >> b1 >> b2 >> ord;
	int ans = 0;
	for (int f = 0; f <= ord; f++) {
		if (b1 * f > ord) { break; }
		for (int sec = 0; sec <= ord; sec++) {
			int n = (b1 * f) + (b2 * sec);
			if (n > ord) { break; }
			ans = max(ans, n);
		}
	}
	cout << ans << endl;
}
