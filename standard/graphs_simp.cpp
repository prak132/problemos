#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<vector<int>> edges;
// vector<vector<vector<int>>> edges; with weights
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    // a, b -> node a to node b
    edges.push_back({1,2});
    edges.push_back({2,3});
    edges.push_back({2,4});
    edges.push_back({3,4});
    edges.push_back({4,1});
    return 0;
    /*
        creating a directed graph with edges
    */
}