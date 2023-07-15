#include <bits/stdc++.h>
using namespace std;
#define int long long
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin>>t;
    for (int i = 0; i < t; i++) {
        int a,b,n,m; cin >> a >> b >> n >> m;
        int ans = min(a,b)*n;
        ans = min(ans,(n/(m+1))*(a*m)+(n%(m+1))*min(a,b));
        cout << ans << '\n';
    }
}