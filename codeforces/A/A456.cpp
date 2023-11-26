#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'


int main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n; cin >> n;
    vector<pair<int, int>> pears;
    for (int i = 0; i < n; i++) {
    	int a,b; cin >> a >> b;
    	pears.push_back({a, b});
    } sort(pears.begin(), pears.end());
    for (int i = 1; i < n; i++) {
        if (pears[i-1].second > pears[i].second) {
            cout << "Happy Alex" << endl;
            return 0;
        }
    } cout << "Poor Alex" << endl;
    return 0;
}