#include <bits/stdc++.h>
#define pb push_back
#define endl "\n"
#define int long long
using namespace std;

void solve(){
    char c; cin>>c;
    for(auto i:"codeforces"){
        if(i==c){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    return;                                                  
} 

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {solve();}
    return 0;
}