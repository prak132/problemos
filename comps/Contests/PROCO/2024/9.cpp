#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> k(n), p(n);
        vector<bool> cut(n, false);
        for(int i = 0; i < n - 1; i++) {
            cin >> k[i];
            k[i]--;
        } priority_queue<pair<int, int>> q;
        for(int i = 0; i < n; i++) {
            cin >> p[i];
            q.push({p[i], i});
        } long long res = 0;
        for(int i = 0; i < n - 1; i++) {
            cut[k[i]] = true;
            while(cut[q.top().second]) {
                q.pop();
            } res += q.top().first;
        } cout << res << "\n";
    } return 0;
}