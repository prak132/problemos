#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    stack<char> st;
    for (char c : s) {
        if (!st.empty() && st.top() == c) {
            st.pop();
        } else {
            st.push(c);
        }
    } cout << st.size() << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t=1; 
    while (t--) {solve();}
    return 0;
}