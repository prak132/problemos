#include <bits/stdc++.h>
using namespace std;

int ans(int N, int M, vector<int>& starting, vector<int>& ending) {
    vector<int> dis;
    for (int i = 0; i < N; ++i) {
        if (starting[i] <= ending[i]) {
            dis.push_back(ending[i] - starting[i]);
        } else {
            dis.push_back(M - starting[i] + ending[i]);
        }
    }
    sort(dis.begin(), dis.end(), greater<int>());
    return dis[0];
}

void solve() {
    int N, M; cin >> N >> M;
    vector<int> starting(N);
    vector<int> ending(N);
    for (int i = 0; i < N; ++i) {
        cin >> starting[i];
    } for (int i = 0; i < N; ++i) {
        cin >> ending[i];
    } int result = ans(N, M, starting, ending);
    cout << result << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    } return 0;
}
