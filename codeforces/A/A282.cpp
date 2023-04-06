#include <bits/stdc++.h>
#define pb push_back
#define endl "\n"
#define int long long

using namespace std;
int a,b(0);

signed main() { 
    cin >> a;
    string s;
    while (a--) {
        cin >> s;
        if (s[1] == '+'){++b;}
        else {--b;}
    }
    cout << b << endl;
}