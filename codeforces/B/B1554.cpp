#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n,k,m=INT_MIN,num;
        cin >> n >> k;
        int arr[n+1];
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        } 
        for (int i = max((long long)1, n - 105); i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                num = i * j - k * (arr[i] | arr[j]);
                m = max(m, num);
            }
        }
        cout << m << "\n";
    }
}
