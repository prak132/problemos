#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b; char c; cin >> a >> c >> b;
    for (int i = 1; i <= a; i++) {
    	for (int j = 1; j <= b; j++) {
    		if (i % 2 == 0) {
    			if (j % 2 == 0) {
    				cout << 'R';
    			}
    			else {
    				cout << 'G';
    			}
    		} else {
    			if (j % 2 == 0) {
    				cout << 'G';
    			}
    			else {
    				cout << 'B';
    			}
    		}
    	} cout << '\n';
    } cout << '\n';
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {solve();}
    return 0;
}