#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int mx = (n/2)*m + (n%2)*(m+1)/2;
    if (k > mx) {
        cout << -1 << endl;
        return 0;
    }
    vector<vector<int>> plot(n, vector<int>(m, 1));
    int apartments = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i % 2; j < m && apartments < k; j += 2) {
            plot[i][j] = 0;
            apartments++;
        }
    } for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << plot[i][j] << " ";
        } cout << endl;
    } return 0;
}
