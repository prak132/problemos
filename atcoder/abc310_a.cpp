#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n,p,q;
    cin >> n >> p >> q;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } int cost = 0;
    sort(arr,arr+n);
    if (q+arr[0] > p) {
        cout << p << '\n';
    } else {
        cout << q+arr[0] << '\n';
    } return 0;
}