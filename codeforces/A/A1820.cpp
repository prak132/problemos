#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    while(n--) {
        string s; cin>>s;
        int cnt=0;
        if( s[0]=='_') {
            cnt++;
            if( s[s.length()-1]=='_') {
                cnt++;
            }
        } for( int i = 1; i < s.length(); i++) {   
            if( s[i-1]=='_' && s[i]=='_') {
                cnt++;
            }
        } if( s.length()==1 && s[0]=='^') {
            cout << "1" <<endl;
        } else {
            cout<<cnt<<endl;
        }
    } return 0;
}