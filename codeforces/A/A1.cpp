#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    unsigned long long n,m,a; cin >> n >> m >> a;
    unsigned long long ans = ceil((double)m/a)*ceil((double)n/a);
    cout << ans << endl;
    return 0;
}