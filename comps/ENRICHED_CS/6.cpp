#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int N; cin >> N;
    vector<string> strings(N);
    for(int i = 0; i < N; i++) {
        cin >> strings[i];
    }
    int k; cin >> k;
    vector<string> bad(k);
    for(int i = 0; i < k; i++) {
        cin >> bad[i];
    }
    int l, v; cin >> l >> v;
    map<string, int> amt;
    for(string& s: strings) {
        for(int i = 0; i <= s.size() - v; i++) {
            amt[s.substr(i, v)]++;
        }
    }
    for(int i = 0; i < k; i++) {
        amt[bad[i]] = 0;
    }
    int ans = 0;
    for(auto& p: amt) {
        if(p.second >= l) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}