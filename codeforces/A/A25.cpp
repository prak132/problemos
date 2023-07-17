#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,ans; cin >> n;
    int arr[n+1];
    int evens = 0, odds = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    } for (int i = 1; i <= n; i++) {
        if (arr[i] % 2 == 0) {
            evens++;
        } else {
            odds++;
        }
    } if (evens > odds) {
        for (int i = 1; i <= n; i++) {
            if (arr[i] % 2 != 0) {
                cout << i << '\n';
                return 0;
            }
        }
    } else {
        for (int i = 1; i <= n; i++) {
            if (arr[i] % 2 == 0) {
                cout << i << '\n';
                return 0;
            }
        }
    }
}