#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int i, j, k; int n, ans, sum; cin >> n; n=n*2; int a[n];
    for(i = 0; i < n; i++) {
        cin >> a[i];
    } ans = 9999;
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            sum=0;
            vector<int> v;
            for(k=0;k<n;k++) {
                if(k!=j && k!=i) {
                    v.push_back(a[k]);
                }
            } sort(v.begin(),v.end());
            for (k=0;k<v.size();k+=2) {
                sum+=(v[k+1]-v[k]);
            } ans=min(ans,sum);
        }
    }
    cout << ans << endl;
    return 0;
}