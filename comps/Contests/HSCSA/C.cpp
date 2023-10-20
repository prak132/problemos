// prakhar
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int k, n;cin >> k >> n;
    priority_queue<int> a;
    for(int i=0; i<n; i++) {
        int temp;
        cin >> temp;
        a.push(temp);
    } int ans = 0;
    while(!a.empty() && a.top() >= k) {
        ans++;
        int temp = a.top();
        a.pop(); k++;
        if(temp-1 > 0) {
            a.push(temp-1);
        }
    } cout << ans << "\n";
    return 0;
}
