#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};

int main() {
    //freopen("maze.in", "r", stdin);
    //freopen("maze.out", "w", stdout);
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int size, k; cin >> size >> k;
    int grid[size][size];
    bool visited[size][size];
    memset(grid, 0, sizeof(grid));
    memset(visited, false, sizeof(visited));
    for(int i = 0; i < k; i++) {
        int x, y; cin >> x >> y;
        grid[--x][--y] = -1;
    }
    queue<array<int, 3>> q;
    q.push({0, 0, 0});
    while(!q.empty()) {
        int x = q.front()[0], y = q.front()[1], time = q.front()[2];
        q.pop();
        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if(nx == size-1 && ny == size-1) {
                cout << time+1 << endl;
                exit(0);
            }
            if (nx < 0 || nx >= size || ny < 0 || ny >= size || grid[nx][ny] == -1 || visited[nx][ny])
                continue;
            
            visited[nx][ny] = true;
            q.push({nx, ny, time+1});
        }
    }
    cout << "-1" << endl;
    return 0;
}
