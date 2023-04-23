#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("sequence.in", "r", stdin);
    //freopen("sequence.out", "w", stdout);
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> tails(n);
    int len = 1;
    tails[0] = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > tails[len - 1]) {
            tails[len] = a[i];
            len++;
        } else {
            int idx = lower_bound(tails.begin(), tails.begin() + len, a[i]) - tails.begin();
            tails[idx] = a[i];
        }
    }
    cout << len << endl;
    return 0;
}