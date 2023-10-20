// prakhar
#include<bits/stdc++.h>
using namespace std;
 
bool pt(int n) {
    return (n && (n & (n - 1)));
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(pt(n + 1)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } return 0;
}
