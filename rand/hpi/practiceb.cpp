//https://docs.google.com/document/d/1F_57zudbN3rvFQK71OIpmolft4N9qWeszWr4qrQJozw/edit
#include <bits/stdc++.h>
#define pb push_back
#define endl "\n"

using namespace std;
int a,b;
vector<int> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {cin >> a;v.pb(a);}
    sort(v.begin(), v.end());
    //for (auto x : v){cout << x << " ";}
    v.pop_back();v.erase(v.begin());b = v.size()-1;a = v[b]-v[0];cout << a << endl;
    return 0;
} 