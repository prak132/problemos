#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
    return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}

// CSE/gcd.cpp
// Score: 100/100 (10 ms - 680 KB)