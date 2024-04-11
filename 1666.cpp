#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAXN 200001
vector<vector<int>> adj(MAXN);
vector<bool> visited(MAXN);
vector<int>bridges;

void dfs (int node) {
  visited[node] = true;
  for (auto child : adj[node]) {
    if (visited[child] == false) {
      dfs(child);
    }
  }
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++) {
      int a, b; cin >> a >> b;
      adj[a].push_back(b);
      adj[b].push_back(a);
    } for (int i = 1; i <= n; i++) {
        if (visited[i] == false) {
            bridges.push_back(i);
            dfs(i);
        }
    } cout << bridges.size()-1 << endl;
    for (int i = 0; i < bridges.size() - 1; i++) {
      cout << bridges[i] << " " << bridges[i + 1] << endl;
    } return 0;
}