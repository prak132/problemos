#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    freopen("cowqueue.in", "r", stdin);
    freopen("cowqueue.out", "w", stdout);
    int N,a,b,sum = 0; cin >> N;
    vector<pair<int, int> > v;
    for (int i=0; i < N; i++) {
        cin >> a >> b; v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < N; i++) {
		v[i].first = max(v[i].first, sum);
        sum = v[i].first + v[i].second;
	}
    cout << sum << endl;
}