#include <bits/stdc++.h>
using namespace std;

/*
METHOD 1
int main() {
	ios::sync_with_stdio(false);cin.tie(nullptr);
    int n; cin >> n;
    int ar[n];
    for (int i=0; i < n; i++) {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    int current = 0,ans=0;
    for (int j=0; j < n; j++) {
        if (ar[j] != current) {
            ans++;
            current = ar[j];
        }
    }
    cout << ans << endl;
    return 0;
}
*/
//method 2... better and easier
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,b; cin >> n;
    set<int> s;
    for (int i=0; i < n; i++) {
        cin >> b; s.insert(b);
    }
    cout << s.size() << endl;
}