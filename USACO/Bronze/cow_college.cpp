#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } sort(arr, arr + n);
    int mm = 0, mt = 0;
    int cows = n;
    for (int i = 0; i < n; i++) {
        int tuition = arr[i] * cows;
        if (tuition > mm) {
            mm = tuition;
            mt = arr[i];
        }
        cows--;
    } cout << mm << " " << mt << endl;
    return 0;
}
