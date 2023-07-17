#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t,n; cin >> t;
    while (t--) {
        cin >> n; int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        } long long cnt = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int msb = log2(a[i]);
            mp[msb]++;
        }
        for (auto it : mp) {
            cnt += (long long)it.second * (it.second - 1) / 2;
        }
        cout << cnt << '\n';
    }
}
