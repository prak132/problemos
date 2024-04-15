#include <bits/stdc++.h>
using namespace std;
#define io(file) freopen(file".in", "r", stdin); freopen(file".out", "w", stdout);
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pii;
#define pb push_back
#define f first
#define s second
#define endl '\n'
#define MAXN 200001

vi adj[MAXN];
int sub[MAXN];

void dfs(int v) {
    for(auto u : adj[v]) {
    	cout << u << endl;
        dfs(u);
        sub[v] += sub[u] + 1; // coutns the children for that node
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    for(int i = 2; i <= n; i++) {
        int a; cin >> a;
        adj[a].push_back(i);
    } dfs(1);
    for(int i = 1; i <= n; i++) {
        cout << sub[i] << " ";
    } cout << endl;
    return 0;
}