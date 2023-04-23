#include <bits/stdc++.h>
#define pb push_back
#define endl "\n" 
#define int long long

using namespace std;
int a,b;


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int h = 0;
    int v = 0;
    for (int i = 0;i < n;i++) {
        char d;
        int pos;
        cin >> d >> pos;
        if (d == 'h') {
            h += 1;
        } else {
            v += 1;
        }
    }
    cout << h*v << endl;
    return 0;
}

/*
g++ dale.cpp -std=c++17
5
h 3
h 2
h 1
v 2
v 1

*/