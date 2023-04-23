#include <bits/stdc++.h>
using namespace std;
//I solved
string unscramble(string word) {
    word.erase(remove(word.begin(), word.end(), 'x'), word.end());
    int count_y = count(word.begin(), word.end(), 'y');
    word.erase(remove(word.begin(), word.end(), 'y'), word.end());
    word.append(count_y, 'y');
    
    return word;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n;
    cin >> n;
    string words[n];
    for (int i = 0; i < n; i++) {
        cin >> words[i];
        words[i] = unscramble(words[i]);
    }
    sort(words, words + n, [](string a, string b) {
        if (a.length() != b.length()) {
            return a.length() > b.length();
        } else {
            return a < b;
        }
    });
    for (int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }
    
    return 0;
}
