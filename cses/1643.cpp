#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t; ll arr[t];
    for (int i = 0; i < t; i++) {cin >> arr[i];}
    ll curr = 0, max = arr[0];
    for (int i = 0; i < t; i++) {
        curr = curr + arr[i];
        if (max < curr) {
            max = curr;
        } if (curr < 0) {
            curr = 0;
        }
    } 
    cout << max << endl;
    return 0;
}