#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int N, K;
    cin >> N >> K;
    ll ans = 0LL;
    ll day[N];
    for(int i = 0; i<N; i++){
        cin >> day[i];
        if(i == 0){
            ans += K + 1LL;
        }
        else{
            ll extendCost = day[i] - day[i-1];
            ll newCost = K + 1LL;
            ans += min(extendCost, newCost);
        }
    }
    cout << ans << endl;
}