#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);cin.tie(nullptr);
    string s; char current;
    int count = 0, ans = 0; cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != current) {
            current = s[i];
            count = 0;
        }   
        if (s[i] == current) {
            count++;
        }
        ans = max(ans, count);
    }
    cout << ans;
}