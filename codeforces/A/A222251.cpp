#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int s,v1,v2,t1,t2,f,s2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    f = (s*v1)+(2*t1);
    s2 = (s*v2)+(2*t2);
    if (f < s2) {
        cout << "First\n";
    } else if (s2 < f){
        cout << "Second\n";
    } else {
        cout << "Friendship\n";
    }
    return 0;
}
//http://vplanet.contest.codeforces.com/group/hK6hgc8x94/contest/222251/problem/A