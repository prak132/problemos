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
    int n, k; cin >> n >> k;
    vector<int> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    } int sum = 0, negs = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] < 0) {
            negs++;
        }
    } int cng = min(k, negs);
    for (int i = 0; i < cng; ++i) {
        s[i] *= -1;
    } for (int x : s) {
        sum += x;
    } if (k > negs && (k - negs) % 2 == 1) {
        sum -= 2 * min(abs(s[cng - 1]), abs(s[cng]));
    } cout << sum << endl;
    return 0;
}
