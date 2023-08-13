// prakhar partials

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t;cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        int max_xor = 0;
        for (int v = 0; v < z; ++v) {
            int cur_xor = (v + x) ^ (v + y);
            max_xor = max(max_xor, cur_xor);
        } cout << max_xor << endl;
    } return 0;
}

/*
intended solution (I did not do this)

#include<bits/stdc++.h>
using namespace std;
#define B 30
int x,y,z;
void solve(){
    cin>>x>>y>>z;
    //(v+x)^(v+y) s.t. 0<=v<z
    if(x==y){
        cout<<0<<endl;
        return;
    }
    int cans=0;
    for(int a=B-1;a>=0;--a){
        if(x==y)break;
        if(x>=(1<<a)&&y>=(1<<a)){
            x-=(1<<a);
            y-=(1<<a);
            continue;
        }
        if(z-1+x>=(1<<a)||z-1+y>=(1<<a)){
            if(x>y)swap(x,y);
            z=min(z-max(0,((1<<a)-y)),(1<<a)-x);
            int av=max(0,(1<<a)-y);
            x+=av;
            y+=av;
            y-=(1<<a);
            cans+=(1<<a);
        }
    }
    cout<<cans<<endl;
}
signed main(){
    iostream::sync_with_stdio(false);cin.tie(NULL);
    int t;cin>>t;
    for(int a=0;a<t;++a){
        solve();
    }
}


*/