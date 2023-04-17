#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
	int N;
	cin >> N;
    int sn = N*(N+1)/2;
    int sm = 0;
    for (int i = 0; i < N-1; i++) {
        int x;
        cin >> x;
        sm += x;
    }
    int missing = sn - sm;
    cout << missing << endl;
    return 0;
}