#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);
    int N, K;
    cin >> N >> K;
    int sum=0; 
    for (int i = 0; i < N; i++) {
		string s; cin >> s; sum += s.length();
        if (sum <= K) {
            if (i > 0) {
                cout << " ";
            }
            cout << s; 
        } else {
            cout << '\n' << s;
            sum = s.length();
        }
    }
}