#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n,k,i,s,r,c;
    while (cin >> n >> k) { //so basicly instead of a for loop using a while loop only iterates this once
        r = 240-k, s=0, c=0; //binary search impl
        for (i=1; i<=n; i++) {
            s += 5*i;
            if (s > r) {
                break;
            }
            c = c + 1;
        } 
        cout << c << "\n";
    } 
    return 0;
}//seccond try