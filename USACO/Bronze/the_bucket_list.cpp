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
    setIO("blist");
    int n; cin >> n;
    vector<int> ans(1001);
    for (int i = 0; i < n; i++) {
        int s, f, amt; cin >> s >> f >> amt;
        ans[s] += amt;
        ans[f] -= amt;
    }
    int max_amt = 0, curr_amt = 0;
    for (int t = 0; t < 1000; t++) {
        curr_amt += ans[t];
        max_amt = max(max_amt, curr_amt);
    } cout << max_amt << endl;
    return 0;
}