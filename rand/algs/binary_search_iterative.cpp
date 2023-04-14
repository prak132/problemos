#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    vector<int> v{1,2,3,4,6,5};
    int l=0,h=(v.size())-1,target;
    cin >> target;
    while (l <= h) {
        int mid = l+(h-l)/2;
        if (v[mid] == target) {
            cout << mid << "\n";
        } else if (v[mid] > target) {
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    } cout << "not found\n";
    return 0;
}