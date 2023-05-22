#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
	freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);
	int n; cin >> n;
	vector<int> x(n);
	vector<int> y(n);
	for (int i = 0; i < n; i++) { cin >> x[i] >> y[i]; }
        int high = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    if (y[i] == y[j] && x[i] == x[k]) {
                        int area = abs((x[j] - x[i]) * (y[k] - y[i]));
                        high = max(high, area);
                    }
             }
        }
	}
	cout << high << endl;
}