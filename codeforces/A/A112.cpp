#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int i; string f,s;
    while(cin>>f>>s) {
        for(i=0; i<f.size(); i++) { //to lwoercase :)
            if(f[i]>='A'&&f[i]<='Z') {
                f[i]=f[i]-'A'+97;
            } if(s[i]>='A'&&s[i]<='Z') {
                s[i]=s[i]-'A'+97;
            }
        } for(i=0; i<s.size(); i++) { //compare
            if(f[i]>s[i]) {
                cout<<"1\n";
                return 0;
            } if(s[i]>f[i]) {
                cout<<"-1\n";
                return 0;
            }
        } cout<<"0\n";
    } return 0;
}