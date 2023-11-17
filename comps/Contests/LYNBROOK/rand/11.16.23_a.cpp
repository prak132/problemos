#include <bits/stdc++.h>
using namespace std;

void solve() {
    string temp,s; cin >> s; 
    temp = s;
    reverse(s.begin(), s.end());
    cout << s << temp << '\n';
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {solve();}
    return 0;
}