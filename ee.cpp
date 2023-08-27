#include <bits/stdc++.h>
using namespace std;

// ill finish later ahhh

void setIO(string name = "") {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    if (name.size()) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

int main() {
    setIO("io");
    int t;cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<vector<int>> board(n, vector<int>(n, 0));
        vector<int> remN;
        for (int i = 1; i <= n * n; i++) {
            remN.push_back(i);
        } int prevA = 0;
        while (q--) {
            int xi, yi;
            cin >> xi >> yi;
            xi = xi ^ prevA;
            yi = yi ^ prevA;
            int maxN = -1, maxNX, maxNY;
            for (int dx = -1; dx <= 1; dx++) {
                for (int dy = -1; dy <= 1; dy++) {
                    int nx = xi + dx, ny = yi + dy;
                    if (nx >= 0 && nx < n && ny >= 0 && ny < n && board[nx][ny] == 0) {
                        int nn = (nx > 0 ? board[nx - 1][ny] : 0);
                        nn = max(nn, (ny > 0 ? board[nx][ny - 1] : 0));
                        nn = max(nn, (nx < n - 1 ? board[nx + 1][ny] : 0));
                        nn = max(nn, (ny < n - 1 ? board[nx][ny + 1] : 0));
                        if (nn < remN.back()) {
                            maxN = remN.back();
                            maxNX = nx;
                            maxNY = ny;
                        }
                    }
                }
            } board[maxNX][maxNY] = maxN;
            remN.pop_back();
            prevA = maxN;
            cout << maxN << " ";
        }
        cout << endl;
    }
    return 0;
}
