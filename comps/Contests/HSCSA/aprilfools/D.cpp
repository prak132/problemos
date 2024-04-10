#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int x; cin >> x;
    switch(x) {
        case 1:
            cout << "red\n";
            break;
        case 2:
            cout << "yellow\n";
            break;
        case 3:
            cout << "blue\n";
            break;
        case 4:
            cout << "purple\n";
            break;
        case 5:
            cout << "green\n";
            break;
        default:
            break;
    }
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t=1; 
    // cin >> t;
    while (t--) {solve();}
    return 0;
}