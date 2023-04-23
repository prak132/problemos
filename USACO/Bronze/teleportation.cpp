#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("teleport.in", "r", stdin);
	freopen("teleport.out", "w", stdout);
	int a, b, x, y; cin >> a >> b >> x >> y;
	int ans = abs(a - b); //compare with teleporting and without teleporting
	if (ans > abs(a - x) + abs(b - y)) { //print the min
		ans = abs(a - x) + abs(b - y);
	} if (ans > abs(a - y) + abs(b - x)) {
		ans = abs(a - y) + abs(b - x);
	} 
    cout << ans << '\n';
}