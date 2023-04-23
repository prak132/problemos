#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);
    string s;//brute force
    int N; cin >> N; cin >> s;
    for (int k=1; k < N+1; k++) {
        set<string> STR;
        for (int i=0; i+k-1 < N; i++) {
            string S1;
            for (int j=0; j<k; j++) {
                S1 += s[i+j];
            }
            STR.insert(S1);
        }
        if (STR.size() == N-k+1) {
            cout << k << "\n";
            return 0;
        }
    }

    return 0;
}