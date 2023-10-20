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
    setIO();
    int t,c; cin >> t;
    float a=0.0,b=0.0;
    while (t--) {
        cin >> a >> b >> c;
        if (a == b) {
            cout << 0;
        }
        int z = max(a,b) - min(a,b);
        if (z % c == 0) {
            
        }
    }
    return 0;
}