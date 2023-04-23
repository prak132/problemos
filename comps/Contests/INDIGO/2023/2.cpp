#include <bits/stdc++.h>
using namespace std;
//I solved 
//lol
const string PI = "314159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706";
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int correct = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == PI[i]) {
                correct++;
            } else {
                break;
            }
        }
        cout << correct << endl;
    }
    return 0;
}
