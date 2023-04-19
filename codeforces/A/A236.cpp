#include <bits/stdc++.h>
#define pb push_back
#define endl "\n"

using namespace std;
string str;
int z;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    cin >> str;
    set<char>len;
    for(int i = 0;i<str.size();i++){
        len.insert(str[i]);
    }
    int a = len.size();
    if (a%2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    }
    else {
        cout << "IGNORE HIM!" << endl;
    }
}