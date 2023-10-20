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
    setIO("io");
    int t,sum=0; cin >> t; int dp[t];
    for (int i = 0; i < t; i++) {
        cin >> dp[i];
    } for (int i = 1; i < t; i++) {
        continue;
    }
    return 0;
} 