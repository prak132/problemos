#include <bits/stdc++.h>
using namespace std;
 
const double EPS = 1e-9;
int H, K, n;
vector<pair<int, int>> monitors;
 
bool check(double r) {
    double x1 = 0, x2 = H, y1 = 0, y2 = K;
    for (int i = 0; i < n; i++) {
        x1 = max(x1, monitors[i].first - r);
        x2 = min(x2, monitors[i].first + r);
        y1 = max(y1, monitors[i].second - r);
        y2 = min(y2, monitors[i].second + r);
    }
    return x1 <= x2 + EPS && y1 <= y2 + EPS;
}
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    cin >> H >> K >> n;
    monitors.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> monitors[i].first >> monitors[i].second;
    }
    double l = 0.0, r = max(H, K), ans = 0.0;
    while (r - l > EPS) {
        double mid = (l + r) / 2.0;
        if (check(mid)) {
            ans = mid;
            l = mid;
        } else {
            r = mid;
        }
    }
    cout.precision(10);
    cout << ans << endl;
    return 0;
}
