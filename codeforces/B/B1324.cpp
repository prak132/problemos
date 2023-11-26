#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

/*
find 2 numbers equal to eachother of i and i+2
find pairs of equal non adj nums
*/

void solve() {
    int n; cin >> n; int arr[n];
    for (int i = 0; i < n; i++) {cin >> arr[i];}
    for (int i = 0; i < n-2; i++) {
        if (arr[i] == arr[i + 2]) {
            cout << "YES\n";
            return;
        }
    } unordered_map<int, int> nums;
    for (int i = 0; i < n; ++i) {
        if (nums.count(arr[i]) && i - nums[arr[i]] > 1) {
            cout << "YES\n";
            return;
        } nums[arr[i]] = i;
    } cout << "NO\n";
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {solve();}
    return 0;
}