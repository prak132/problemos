#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n, k; cin >> n >> k;
    vector<pair<int, int>> clues(n);
    vector<int> inverse(n);
    for (int i = 0; i < n; ++i) {
        int x, y; cin >> x >> y;
        clues[i] = {x, i + 1};
        inverse[i] = ((1 << k) - 1) ^ y;
    }
    sort(clues.begin(), clues.end());
    int start = (1 << k) - 1;
    for (int i = 0; i < n; ++i) {
        if (clues[i].first == start) {
            cout << clues[i].second << " ";
            start = inverse[clues[i].second - 1];
            break;
        }
    } for (int i = 1; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (clues[j].first == start) {
                cout << clues[j].second << " ";
                start = inverse[clues[j].second - 1];
                break;
            }
        }
    } return 0;
}
