#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<string> fract(vector<string> grid, int k) {
    if (k == 0) return grid;
    vector<string> sf = fract(grid, k - 1);
    int n = sf.size();
    vector<string> fractal(n * 3, string(n * 3, ' '));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (sf[i][j] == 'x') {
                for (int di = 0; di < 3; ++di) {
                    for (int dj = 0; dj < 3; ++dj) {
                        fractal[i * 3 + di][j * 3 + dj] = grid[di][dj];
                    }
                }
            } else {
                for (int di = 0; di < 3; ++di) {
                    for (int dj = 0; dj < 3; ++dj) {
                        fractal[i * 3 + di][j * 3 + dj] = 'o';
                    }
                }
            }
        }
    } return fractal;
}

void solve() {
    int k;
    cin >> k;
    vector<string> grid(3);
    for (int i = 0; i < 3; ++i) cin >> grid[i];
    vector<string> fractal = fract(grid, k);
    for (const string& row : fractal) cout << row << endl;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t=1; 
    // cin >> t;
    while (t--) {solve();}
    return 0;
}