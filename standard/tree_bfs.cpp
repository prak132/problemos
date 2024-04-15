#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
#define pb push_back
#define f first
#define s second
#define endl '\n'
#define MAXN 200001

vector<int> adj[MAXN];
int dist[2][MAXN];

void bfs(int s, int id) {
    memset(dist[id], -1, sizeof dist[id]);
    queue<int> q;
    dist[id][s] = 0;
    q.push(s);
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int u : adj[v]) {
            if (dist[id][u] == -1) {
                dist[id][u] = dist[id][v] + 1;
                q.push(u);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 0; i < n-1; i++) {
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    } bfs(1, 0);
    int u = max_element(dist[0]+1, dist[0]+n+1) - dist[0];
    bfs(u, 0);
    int v = max_element(dist[0]+1, dist[0]+n+1) - dist[0];
    bfs(v, 1);
    for (int i = 1; i <= n; i++) {
        cout << max(dist[0][i], dist[1][i]) << " ";
    } cout << endl; 
    return 0;
}
/*
Using bfs to find the greatest distance between nodes
we find the farthest node from 1
then we find the farthest node from it loop through all nodes
*/