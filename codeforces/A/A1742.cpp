#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a + b + c - max({a, b, c}) == max({a, b, c})) {
    	cout << "YES\n";
    } else {
    	cout << "NO\n";
    }
}
// andy?????
int main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {solve();}
    return 0;
}