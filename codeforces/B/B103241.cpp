#include <bits/stdc++.h>
using namespace std;

// ill finish later ahh

void setIO(string name = "") {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	if (name.size()) {
		freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

int main() {
    setIO("");
    int t; cin >> t;
    int arr[t];
    for (int i = 0; i < t; ++i) {
        cin >> arr[i];
    } sort(arr, arr + t);
    arr[0] = 0;
    double ans = 0.0;
    for (int x : arr) {
        ans += x * 10;
    } cout << ans/(t-1)/10 << endl;
    return 0;
}