#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    int n; cin >> n;
	vector<int> ans(n);
	for (int i = 0; i < 3; i++) { ans[i] = i; }
	vector<int> cnt(n);
	for (int i = 0; i < n; i++) {
		int a, b, g;
		cin >> a >> b >> g;
		a--, b--, g--;
		swap(ans[a], ans[b]);
		cnt[ans[g]]++;
	}
	cout << max(cnt[0], max(cnt[1], cnt[2])) << endl;
    return 0;
}