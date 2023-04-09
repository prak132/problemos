#include <bits/stdc++.h>
using namespace std;
void solve(int N, int M, vector<char> P, vector<char> C) {
    vector<char> items = P;
    items.insert(items.end(), C.begin(), C.end());
    sort(items.begin(), items.end());
    for (char item : items) {
        cout << item << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<char> P(N);
        for (int i = 0; i < N; i++) {
            cin >> P[i];
        }
        vector<char> C(M);
        for (int i = 0; i < M; i++) {
            cin >> C[i];
        }
        solve(N, M, P, C);
    }
    return 0;
}
