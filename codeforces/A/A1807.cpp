#include <bits/stdc++.h>
#define pb push_back
#define endl "\n"
#define int long long
//first real problem in contest!!!
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b == c) {
        //only need 1 op to get result
        cout << "+" << endl;
    } else {
        cout << "-" << endl;
    }
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {solve();}
    return 0;
}