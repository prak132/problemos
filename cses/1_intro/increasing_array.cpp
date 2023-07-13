#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,count=0;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i < n; i++){
        int a; cin >> a; v[i] = a;
    } for (int i=1; i < n; i++){
        if (v[i-1] >= v[i]) {
            int diff = v[i-1] - v[i];
            v[i] += diff;
            count += diff;
        }
    } cout << count << endl;
}
