#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
vector<int> adj[N];
int vis[N];

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    queue<int> q;
    vector<vector<int>> routes(k);
    vector<int> sv(k);
    for (int i = 0; i < k; i++) {
        sv[i] = i + 1;
        q.push(i + 1);
        vis[i + 1] = 1;
    }

    for (int i = 0; i < k; i++) {
        int mv = (2 * n + k - 1) / k;
        while (!q.empty() && routes[i].size() < mv) {
            int v = q.front();
            q.pop();
            routes[i].push_back(v);
            for (int u : adj[v]) {
                if (!vis[u]) {
                    vis[u] = 1;
                    q.push(u);
                }
            }
        }
    }
    for (int i = 0; i < k; i++) {
        cout << routes[i].size() << " ";
        for (int v : routes[i]) {
            cout << v << " ";
        }
        cout << endl;
    }
    return 0;
}
