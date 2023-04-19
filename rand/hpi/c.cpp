#include <bits/stdc++.h>
#define int long long

using namespace std;
int a,b=0;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k; cin >> n >> k;
    while(n--) {cin >> a; b += a;}
    cout << (int) ceil((double) b/k) << "\n";
    return 0;
}

/*
g++ c.cpp -std=c++17

3 2
1 1 2

ggs
:salute:
*/