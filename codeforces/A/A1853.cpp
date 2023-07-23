#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int min = 0; bool sort = 1;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                sort = false;
                break;
            }
        }
        if (sort) {
            for (int i = n - 2; i >= 0; i--) {
                int l = arr[i], r = arr[i + 1], b = r - l, c = b / 2; c++;
                if (min == 0) {
                    min = c;
                } else {
                    if (c < min) {
                        min = c;
                    }
                }
            } cout << min << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
