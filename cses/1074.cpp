#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    ll t; cin >> t; ll arr[t];
    for (int i = 0; i < t; i++) {cin >> arr[i];}
	sort(arr, arr+t);
	ll mid = arr[t/2], sum = 0;
	for (auto x : arr) {
		sum += abs(mid-x);
	} cout << sum << "\n";

    return 0;
}