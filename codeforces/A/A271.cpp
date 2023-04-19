#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
     int y; string s;
     cin >> y;
     while(1){
        y++;
        auto s = to_string(y);
        if(s[0]!=s[1] && s[0]!=s[2] && s[0]!=s[3] && s[1]!=s[2] && s[1]!=s[3] && s[2]!=s[3]) {
            break;
        }
     cout<< y << endl;
     return 0;
 }
