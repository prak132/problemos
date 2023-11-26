#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t; int arr[t];
    for (int i = 0; i < t; i++) {cin >> arr[i];}
    sort(arr, arr+t);
    int ans = 0;
    for (int i = 0; i < t/2; i++) {ans+=arr[i];}
    cout << ans << endl;
    return 0;
}