#include <bits/stdc++.h>
using namespace std;

void setIO(string name = "") {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	if (name.size()) {
		freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
}


void solve() {
    string s; cin >> s;
    int p = s[0];
    int a = 0;
    char arr[26];
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == p) {
            a++;
        } if (i % 2 == 0) {
            arr[i] = p;
        }
    } if (a % 2 == 0) {
        arr[a] = p;
    } sort(arr, arr+s.size()-1);
    for (char x : arr) {
        cout << x;
    } cout << '\n';
}

int main() {
    setIO("io");
    int t; cin >> t;
    while (t--) {solve();}
    return 0;
}