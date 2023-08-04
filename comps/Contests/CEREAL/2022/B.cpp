#include <bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n; cin >> n; int arr[n];
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    } double ma = 0.0;
    for (int i = 0; i < n; i++) {
        double avg = (sum - arr[i]) / (n - 1);
        ma = max(ma, avg);
    } cout << fixed << setprecision(1) << ma << endl;
    return 0;
}
