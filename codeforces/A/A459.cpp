#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int arr[4];
    for (int i=0; i<4; i++) {
        cin >> arr[i];
    } if (arr[0] == arr[2]) {
        int len = abs(arr[3] - arr[1]);
        cout << arr[0] + len << " " << arr[1] << " " << arr[2] + len << " " << arr[3] << endl;
    } else if (arr[1] == arr[3]) {
        int len = abs(arr[2] - arr[0]);
        cout << arr[0] << " " << arr[1] + len << " " << arr[2] << " " << arr[3] + len << endl;
    } else if (abs(arr[2] - arr[0]) == abs(arr[3] - arr[1])) {
        cout << arr[0] << " " << arr[3] << " " << arr[2] << " " << arr[1] << endl;
    } else {
        cout << -1 << endl;
    } return 0;
}