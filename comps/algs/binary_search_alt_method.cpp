#include <bits/stdc++.h>
using namespace std;
int main() {//jumping
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int array[] = {1,2,3,4,6,5};
    int k=0,n=5,x=6;
    for (int b = n/2; b >= 1; b /= 2) {
        while (k+b < n && array[k+b] <= x) k += b;
    }
    if (array[k] == x) {
        cout << k << endl;
    }
    return 0;
}