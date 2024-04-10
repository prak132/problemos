#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    long long sum = 0;
    set<int> distinct;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        distinct.insert(a[i]);
    }
    int offset = 0;
    while(m--) {
        int t;
        cin >> t;
        if(t == 1) {
            int l, r;
            cin >> l >> r;
            reverse(a.begin() + (l - 1 + offset) % n, a.begin() + (r + offset) % n);
        } else if(t == 2) {
            int l, r, v;
            cin >> l >> r >> v;
            for(int i = l - 1; i < r; i++) {
                sum -= a[(i + offset) % n];
                if((i - l + 1) % 2 == 0) a[(i + offset) % n] += v;
                else a[(i + offset) % n] -= v;
                sum += a[(i + offset) % n];
                distinct.insert(a[(i + offset) % n]);
            }
        } else if(t == 3) {
            int l, r, x, y;
            cin >> l >> r >> x >> y;
            if(r - l != y - x) {
                continue;
            }
            for(int i = 0; i <= r - l; i++) {
                swap(a[(l - 1 + i + offset) % n], a[(x - 1 + i + offset) % n]);
            }
        } else if(t == 7) {
            cout << sum << '\n';
        } else if(t == 8) {
            int x;
            cin >> x;
            cout << a[(x - 1 + offset) % n] << '\n';
        } else if(t == 9) {
            cout << distinct.size() << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}