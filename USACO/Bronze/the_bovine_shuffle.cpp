#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n; cin >> n; vector<int> arr(n); vector<int> ids(n);
    for (int &i : arr) {cin >> i;}
	for (int &i : ids) {cin >> i;}
    for (int i = 0; i < 3; i++) {
        vector<int> v(n);
        for (int k = 0; k < n; k++) {
            v[k] = ids[arr[k] - 1];
        }
        ids = v;
    } for (const int &i : ids) {cout << i << '\n';}
    return 0;
}