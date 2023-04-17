#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
    vector<bool> painted(100);
	int a, b, c, d, ans = 0;
	cin >> a >> b;
    cin >> c >> d;
	for (int i = a; i < b; i++) {
        painted[i] = true;
    }
	for (int i = c; i < d; i++) { 
        painted[i] = true;
    }
	for (int i = 0; i < painted.size(); i++) {
        ans += painted[i];
    }
    cout << ans << "\n";
    return 0;
}