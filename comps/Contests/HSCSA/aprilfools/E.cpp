#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// HSCSA!

void solve() {
    int x,y; cin >> x >> y;
    if (x == 6 && y == 5) {
    	cout << "YES";
    }
    else if (abs(x-y) > 2) {
    	cout << "NO";
    }
    else {
    	cout << "YES";
    }
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t=1; 
    // cin >> t;
    while (t--) {solve();}
    return 0;
}