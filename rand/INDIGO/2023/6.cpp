#include <bits/stdc++.h>
using namespace std;
//teammate
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int first_on_fire;
    cin >> first_on_fire;

    int num_connections;
    cin >> num_connections;

    // list
    vector<vector<int>> adj_list(1001);
    for (int i = 0; i < num_connections; i++) {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    bool visited[1001] = {false};
    int time[1001] = {0};

    // BFS 
    queue<int> q;
    q.push(first_on_fire);
    visited[first_on_fire] = true;
    time[first_on_fire] = 0;

    // BFS !!!!
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        for (int neighbor : adj_list[curr]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                time[neighbor] = time[curr] + 1;
                q.push(neighbor);
            }
        }
    }
    int last_to_burn = first_on_fire;
    for (int i = 1; i <= 1000; i++) {
        if (visited[i] && time[i] >= time[last_to_burn]) {
            last_to_burn = i;
        }
    }
    cout << last_to_burn << endl;

    return 0;
}
