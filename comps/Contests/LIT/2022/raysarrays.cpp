#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n; cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    int minOps = LLONG_MAX;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            int ops = 0;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (grid[i][j] > 0) {
                        int dis = abs(row - i) + abs(col - j);
                        ops += dis * grid[i][j];
                    }
                }
            }
            minOps = min(minOps, ops);
        }
    }
    cout << minOps << endl;
    return 0;
}
