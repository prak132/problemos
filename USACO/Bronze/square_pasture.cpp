#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);
    int x1,y1,x2,y2,x3,y3,x4,y4,l,r,t,b;
    cin >> x1 >> y1 >> x2 >> y2; cin >> x3 >> y3 >> x4 >> y4;
    l = min(x1,x3);
    r = max(x2,x4);
    b = min(y1,y3);
    t = max(y2,y4);
    int side = max(r-l, t-b);
    cout << pow(side, 2) << "\n";
    return 0;
}