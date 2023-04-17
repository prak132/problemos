#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,ans,sum1,sum2;
    for (int i=1; i <= 100; i++) {
        sum1 += pow(i, 2);
    }
    for (int i=1; i <= 100; i++) {
        sum2 += i;
    }//could've used a calc by whyyyyyyy
    sum2 = pow(sum2, 2);
    cout << sum2-sum1 << endl;
}
//25164150