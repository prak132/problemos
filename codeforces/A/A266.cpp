#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n,cnt=0; string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == s[i-1]) {
            cnt++;
        }
    } cout << cnt << endl;
}
