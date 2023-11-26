#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

double distance(int x1, int y1, int x2, int y2) {
    return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    int mx, my, sx, sy; cin >> mx >> my >> sx >> sy;
    vector<pair<pair<int, int>, int>> friends;
    friends.push_back({{mx, my}, 0});
    for (int i = 0; i < n; ++i) {
        int xi, yi, ai;
        cin >> xi >> yi >> ai;
        friends.push_back({{xi, yi}, ai});
    }
    double totalDistance = 0;
    for (int i = 0; i < n+1; ++i) {
        if (!((i % 3 == 0) && friends[i].second == 0 && i != 0)) {
            totalDistance += distance(mx, my, friends[i].first.first, friends[i].first.second);
            mx = friends[i].first.first;
            my = friends[i].first.second;
        }
    }
    totalDistance += distance(mx, my, sx, sy);
    cout << int(totalDistance) << endl;
    return 0;
}
