#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,s,q; cin >> t >> s >> q;
    int downloaded = s;
    int restarted = 0;
    while (downloaded < t) {
        restarted++;
        downloaded *= q;
    } cout << restarted << '\n';
}