#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,b; cin >> n;
    set<int> s;
    for (int i=0; i < n; i++) {
        cin >> b; s.insert(b);
    }
    cout << s.size() << endl;
}