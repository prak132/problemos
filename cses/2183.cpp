#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    ll n; cin >> n; ll arr[n];
    for (int i = 0; i < n; i++) {cin >> arr[i];}
	sort(arr, arr+n);
	ll sum = 1;
	for (int i = 0; i < n; i++) {
		if (arr[i] > sum) {
			cout << sum << endl; return 0;
		} sum += arr[i];
	} cout << sum;
    return 0;
}