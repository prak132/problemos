// dale

#include <bits/stdc++.h>
 
using namespace std;
#define int long long
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> marks;
    for (int i = 0;i < m;i++) {
        int a, b;
        cin >> a >> b;
        marks.push_back({a, -1});
        marks.push_back({b, 1});
    }
    sort(marks.begin(), marks.end());
    int diff = 1;
    int cur = marks[0].first;
    int gap = 1;
    for (int i = 1;i < m*2;i++) {
        if (diff == 0) {
            gap = max(gap, marks[i].first - cur);
        }
        //cout << cur << endl;
        cur = marks[i].first;
        diff -= marks[i].second;
    }
    //cout << gap << endl;
    //cout << marks[m*2-1].first - marks[0].first << endl;
    cout << min(n - gap, marks[m*2-1].first - marks[0].first) << endl;
}
