#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int x, y; cin >> x >> y;
    int ans = 0, dis = 1, dir = 1;
    if (x==y) cout << 0 << endl;
    else {
        while(true) {
            if ((dir==1 && x<=y && y<=x+dis) || (dir==-1 && x-dis<=y && y<=x)) {
                ans += abs(y-x);
                cout << ans << endl;
                break;
            } else {
                ans += dis*2;dis *= 2;dir *= -1;
            }
        }
    }
    return 0;
}