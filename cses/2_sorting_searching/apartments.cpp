#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,m,k;cin >> n >> m >> k;
    vector<int> ds(n);
    for (int i = 0; i < n; i++) {
        cin >> ds[i];
    } vector<int> apartment_sizes(m);
    for (int i = 0; i < m; i++) {
        cin >> apartment_sizes[i];
    } sort(ds.begin(), ds.end());sort(apartment_sizes.begin(), apartment_sizes.end());
    int ans = 0;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (abs(ds[i] - apartment_sizes[j]) <= k) {
            ans++;i++;j++;
        } else if (ds[i] < apartment_sizes[j]) {
            i++;
        } else {
            j++;
        }
    }
    cout << ans << '\n';
    return 0;
}
