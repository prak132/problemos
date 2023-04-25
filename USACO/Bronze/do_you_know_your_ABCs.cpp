#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int ar[7];
    for (int i=0; i < 7; i++) {
        cin >> ar[i];
    }
    sort(ar, ar+7);
    int a = ar[0];
    int b = ar[1];
    int c = ar[6]-(a+b);
    cout << a << " " << b << " " << c << endl;
    return 0;
}