#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } int ans = 0;
    sort(arr, arr + n);
    for (int k = 0; k <= n; k++) {
      if (k == 0 || arr[k - 1] < k) {
        if (k == n || arr[k] > k) {
          ans += 1;
        }
      }
    } cout << ans << endl;
}


int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    } return 0;
}