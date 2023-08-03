#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int arr[n], ans[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } vector<pair<int, int>> sus;
    for (int i = 0; i < n; i++) {
        int sum_digits = 0, num = arr[i];
        while (num > 0) {
            sum_digits += num % 10;
            num /= 10;
        } sus.push_back({sum_digits % 13, arr[i]});
    } sort(sus.rbegin(), sus.rend());
    for (int i = 0; i < m; i++) {
        cout << sus[i].second << "\n";
    } return 0;
}
