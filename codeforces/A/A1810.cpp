#include <bits/stdc++.h>
using namespace std;

void setIO(string name = "") {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	if (name.size()) {
		freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

int main() {
    setIO("io");
    int t; cin >> t;
    while (t--){
        int n; cin >> n; int arr[n]; bool flag = false;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        } for (int i = 0; i < n; i++) {
            if (arr[i] == i) {
                flag = true;
            }
        } 
        if (flag) {cout << "YES\n";}
        else {cout << "NO\n";}
    }
    return 0;
}