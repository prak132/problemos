#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,ans,total; a=1; b=2;
    ans = 0;
    while (a<=4000000) {
        if (a % 2 == 0) {
            total +=a;
        }
        ans = a+b;
        a=b;
        b=ans;
    }//guess wgat fib this is
    cout << total << endl;
}
//4613732