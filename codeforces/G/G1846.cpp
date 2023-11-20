#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10;
const int INF = 0x3f3f3f3f;
const int MAXM = 1000;
int d[MAXM + 5];
int n, m;
int dis[1 << MAXN];
int rem[MAXM + 5], a[MAXM + 5];

int main() {
    int T;
    cin >> T;
    for (int k = 0; k < T; ++k) {
        cin >> n >> m; int s = 0;
        for (int i = 0; i < n; i++) {
            char c; cin >> c;
            if (c == '1') {s |= (1 << i);}
        } for (int i = 1; i <= m; i++) {
            cin >> d[i];
            rem[i] = a[i] = 0;
            for (int j = 0; j < n; j++) {
                char c; cin >> c;
                if (c == '1') {rem[i] |= (1 << j);}
            } for (int j = 0; j < n; j++) {
                char c; cin >> c;
                if (c == '1') {a[i] |= (1 << j);}
            }
        } memset(dis, INF, sizeof(dis));
        dis[s] = 0;
        queue<int> q; q.push(s);
        while (!q.empty()) {
            int u = q.front(); q.pop(); // state
            for (int i = 1; i <= m; i++) {
                int v = u & (~rem[i]) | a[i];
                if (dis[v] > dis[u] + d[i]) {
                    dis[v] = dis[u] + d[i];
                    q.push(v);
                }
            }
        } if (dis[0] == INF) {cout << -1 << endl;}
        else {cout << dis[0] << endl;}
    } return 0;
}
