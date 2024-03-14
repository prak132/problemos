#include <bits/stdc++.h>
using namespace std;
#define int long long

// WA :( ben had a correct sol
// 9/10 tcs

int solve(vector<vector<int>>& land) {
    int avg = INT_MIN;
    for (const auto& row : land) {
        for (const auto& cell : row) {
            if (cell != -1) {
                avg = max(avg, cell);
            }
        }
    } return avg;
}

signed main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> land(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> land[i][j];
        }
    } int result = solve(land);
    cout << result << '\n';
    return 0;
}
