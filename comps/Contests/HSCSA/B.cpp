// dale
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 0;i < n;i++) {
        int a;
        cin >> a;
        if (a%2 == 0) {
            cout << "lunchbox" << endl;
            return 0;
        }
    }
    cout << "hihitherethere" << endl;
}
