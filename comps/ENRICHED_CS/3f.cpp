#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin >> n;
    vector<int> a(n);
    for(auto& b : a) {
        cin >> b;
    }
    int ans = 0;
    for(int i = 0; i < n;) {
        int x = i;
        do {
            ++x;
        } while(x < n && a[x] > a[x-1]);
        ans = max(ans, x-i);
        i = x;
    }
    cout << ans << '\n';
    return 0;
}
