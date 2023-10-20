#include <bits/stdc++.h>
using namespace std;

string ok = "Case #", uh = ": ";

void setIO(string name = "") {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	if (name.size()) {
		freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

int main() {
    setIO("io");
    int t; cin >> t;
    for (int i = 1; i < t+1; i++) {
        int s,d,k; cin >> s >> d >> k;
        int buns = (s*2)+(d*2), cheese = s+d, patties = s+d;
        int req_buns = k+1, req_cheese = k, req_patties = k;
        if (buns >= req_buns && cheese >= req_cheese && patties >= req_patties) {
            cout << ok << i << uh << "YES" << endl;
        } else {
            cout << ok << i << uh << "NO" << endl;
        }
    }
    return 0;
}