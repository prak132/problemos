#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    //freopen("cups.in", "r", stdin);
    //freopen("cups.out", "w", stdout);
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n;
    cin >> n;
    set<int> r;
    while (n--) {
        int x;
        cin >> x;
        r.insert(x);
    } set<int> v;
    for (int i : r) {
        auto it = v.lower_bound(i);
        if (it != v.end()) {
            v.erase(it);
        } v.insert(i);
    } cout << v.size() << endl;
    return 0;
}