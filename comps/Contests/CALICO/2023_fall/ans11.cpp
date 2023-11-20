#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define debug(x) for(auto i : x) {cout << i << " ";} cout << endl;
#define endl "\n"
#define mod 1000000007

using namespace std;

void setIO(string prob) {
	freopen((prob + ".in").c_str(), "r", stdin);
	freopen((prob + ".out").c_str(), "w", stdout);
}


void solve(){

    int f, b, n, m, s, e;
    cin >> f >> b;
    cin >> n >> m >> s >> e;

    vector<int> t(f);
    vector<vector<int> > adj(n);

    for(int i = 0 ; i < f; i++){
        int a; cin >> a;
        t[i] = a-1;
    }

    for(int i = 0; i < m; i++){
        int a, c; cin >> a >> c;
        adj[a-1].pb(c-1);
        adj[c-1].pb(a-1);
    }

    vector<int> dists(n, INT_MAX);

    queue<int> q;
	dists[s-1] = 0;
	q.push(s-1);
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int l : adj[x]){
			if (dists[l] == INT_MAX) {
				dists[l] = dists[x] + 1;
				q.push(l);
			}
        }
	}

    vector<int> diste(n, INT_MAX);

    diste[e-1] = 0;
    q.push(e-1);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int l : adj[x]){
            if(diste[l] == INT_MAX){
                diste[l] = diste[x]+1;
                q.push(l);
            }
        }
    }

    vector<int> costs(f);

    int base = dists[e-1];

    for(int i = 0; i < f; i++){
        costs[i] = dists[t[i]] + diste[t[i]] - dists[e-1];
        //cout << costs[i] << endl;
    }

    multiset<int> bro;

    int answer = 0;
    for(int i = 0; i < f; i++){
        int help = 0;
        bro.insert(costs[i]);
        int orig = base * (i+1);
        auto it = bro.begin();
        while(orig + *it <= b && it != bro.end()){
            orig += *it;
            help++;
            it++;
        }
        answer = max(answer, help);
    }

    cout << answer << endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //setIO("ioi");

    int t; cin >> t;
    while(t--){
        solve();
    }
}
