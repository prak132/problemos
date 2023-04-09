#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int q, n, m;
        cin >> q >> n >> m;
        vector<unordered_map<int, int>> ur(m + 1);
        vector<int> up(m + 1);
        while (q--) {
            char ac;
            cin >> ac;
            if (ac == 'A') {
                int role, user;
                cin >> role >> user;
                ur[user][role]++;
            } else if (ac == 'R') {
                int role, user;
                cin >> role >> user;
                ur[user][role]--;
            } else {
                int role;
                cin >> role;
                for (int user = 1; user <= m; user++) {
                    up[user] += ur[user][role];
                }
            }
        }
        for (int user = 1; user <= m; user++) {
            cout << up[user] << " ";
        }
        cout << endl;
    }
    return 0;
}
