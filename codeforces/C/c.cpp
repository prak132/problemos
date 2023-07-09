#include <bits/stdc++.h>
using namespace std;
int t, n, m, h, ti[200005];
int main() {
    cin >> t;
    while (t--) {
        cin >> n >> m >> h;
        int ans = 1;
        int s1 = 0, cnt = 0, tot = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) cin >> ti[j];
            sort(ti + 1, ti + m + 1);
            int s2 = 0, cnt2 = 0, tot2 = 0;
            for (int j = 1; j <= m; j++) {
                if (s2 + ti[j] > h) {
                    break;
                }
                s2 += ti[j];
                cnt2++;
                tot2 += s2;
            }
            if (i == 1) {
                s1 = s2;cnt = cnt2;tot = tot2;
                continue;
            } if (cnt2 > cnt) {ans++;}
            else if (cnt2 == cnt && tot2 < tot) {ans++;}
        } cout << ans << endl;
    } return 0;
}