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
    set<string> b;
    for(int i = 0; i < k; i++) {
        string s; cin >> s; b.insert(s);
    }
    int l, v; cin >> l >> v; map<string, int> amt;
    for(string& s: strings) {
        for(int i = 0; i <= s.size() - v; i++) {
            string sub = s.substr(i, v);
            if (b.find(sub) == b.end()) {
                amt[sub]++;
            }
        }
    }
    int sum = 0;
    for(auto& x: amt) {
        if(x.second >= l) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
