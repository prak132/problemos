#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n=4,c=0;
    int ar[4];
    for (int i = 0; i<n; i++) {
        cin>>ar[i];
    }
    sort(ar,ar+n);//I did not need to search up how to sort an array trust
    for (int j=0; j<n; j++) {
        if (ar[j] != ar[j+1]) {
            c++;
        }
    }
    cout << n-c << "\n";
    return 0;
}