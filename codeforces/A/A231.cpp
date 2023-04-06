#include <bits/stdc++.h>
#define pb push_back
#define int long long
#define endl "\n"

using namespace std;
int a,b,c,z;

void solve() {
    cin >> a >> b >> c;
    if (a >= 1 && b >= 1) {
        z++;
    }
    else if (a >= 1 && c >= 1) {
        z++;
    }
    else if (b >= 1 && c >= 1) {
        z++;
    }
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {solve();}
    cout << z << endl;
    return 0;
}