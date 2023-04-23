#include <bits/stdc++.h>
using namespace std;
//I solved 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }
    int prev_height = 0, operations = 0;
    for (int i = 0; i < n; i++) {
        if (heights[i] > prev_height) {
            operations += heights[i] - prev_height;
        }
        prev_height = heights[i];
    }
    cout << operations << endl;

    return 0;
}
