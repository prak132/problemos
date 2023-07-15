#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int a,b,i=0;
    cin>>a>>b;
    if(a>b) {
        i=0;
    } else {
        do {
            a=a*3;
            b=b*2;
            i++;
        } while(a<=b);
    } cout << i << endl;
}