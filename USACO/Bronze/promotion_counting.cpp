#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);
    int a,b,c,d,e,f,g,h;
    cin >> a >> b; cin >> c >> d; cin >> e >> f; cin >> g >> h;
    int gtp = h - g;
    int stg = h + f - g - e;
    int bts = d + f + h - c - e - g;
    cout << bts << endl << stg << endl << gtp << endl;
    return 0;
}