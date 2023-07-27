#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int N;cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; i++) {
        cin >> S[i];
        auto T = string(S[i].rbegin(), S[i].rend());
        if (T < S[i]) {
            S[i] = T;
        }
    } auto ans = (set(S.begin(), S.end()).size());
    cout << ans << "\n";
    return 0;
}