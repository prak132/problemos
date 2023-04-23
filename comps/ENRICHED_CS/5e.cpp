#include <bits/stdc++.h>
#define INF 1e9
using namespace std;

int main() {
    //freopen("maze.in", "r", stdin);
    //freopen("maze.out", "w", stdout);
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int size, k; cin >> size >> k;
    vector<vector<int>> adj(size*size);
    vector<int> dist(size*size, INF);
    for(int i = 0; i < k; i++) {
        int x, y; cin >> x >> y;
        adj[(x-1)*size+(y-1)].clear();
    }
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(i > 0) adj[i*size+j].push_back((i-1)*size+j);
            if(i < size-1) adj[i*size+j].push_back((i+1)*size+j);
            if(j > 0) adj[i*size+j].push_back(i*size+(j-1));
            if(j < size-1) adj[i*size+j].push_back(i*size+(j+1));
        }
    }
    dist[0] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 0});
    while(!pq.empty()) {
        int u = pq.top().second, d = pq.top().first;
        pq.pop();
        if(d > dist[u]) continue;
        for(int v : adj[u]) {
            if(dist[v] > dist[u] + 1) {
                dist[v] = dist[u] + 1;
                pq.push({dist[v], v});
            }
        }
    }
    if(dist[size*size-1] == INF) cout << "-1" << endl;
    else cout << dist[size*size-1] << endl;
    return 0;
}
