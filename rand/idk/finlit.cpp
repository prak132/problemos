#include <bits/stdc++.h>
#define pb push_back
#define endl "\n"

using namespace std;
double P,d,r,n,ans;
//wanted to finish my hw faster
void solve() {
    cin >> P >> d >> r >> n;
    P -= d;
    double monthlyRate = r / 12.0;
    double ans = (P * monthlyRate) / (1 - pow(1 + monthlyRate, -n));
    cout << ans << endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {solve();}
    return 0;
}