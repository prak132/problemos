#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,a=0,b=0,c=0,s1=0,s2=0,s3=0; cin >> t;
    for (int i=0; i<t; i++) {
        cin >> a >> b >> c;
        s1+=a;s2+=b;s3+=c;
    } if (s1==0 && s2==0 && s3==0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}