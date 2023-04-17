#include <bits/stdc++.h>
using namespace std;//would've been cooler if I used switch cases lol

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);
    //scissors = 1
    //hoof = 2
    // paper = 3
    int N,a,b,num1,num2; cin >> N;
    for (int i=0; i < N; i++) {
        cin >> a >> b;
        if (a==b) {
            continue;
        }
        else if (a == 2 && b == 1) {
            num1++;
        }
        else if (a == 1 && b == 3) {
            num1++;
        }
        else if (a == 3 && b == 2) {
            num1++;
        }
        else {
            num2++;
        }
    }
    cout << max(num1,num2) << endl;
    return 0;
}