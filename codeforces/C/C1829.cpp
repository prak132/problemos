#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> books;
        int both_skills = 0, skill_1 = 0, skill_2 = 0;
        for (int i = 0; i < n; i++) {
            int m, s1, s2;
            cin >> m >> s1 >> s2;
            if (s1 && s2) {
                both_skills++;
            } else if (s1) {
                skill_1++;
                books.push_back({2, m});
            } else if (s2) {
                skill_2++;
                books.push_back({1, m});
            }
        }
        if (both_skills == 0 || skill_1 == 0 || skill_2 == 0) {
            cout << "-1\n";
            continue;
        }
        sort(books.rbegin(), books.rend());
        int minutes = 0, acquired = 0;
        while (acquired != 3) {
            if (books.empty()) {
                cout << "-1\n";
                break;
            }
            auto [mask, time] = books.back();
            books.pop_back();
            if (mask == 3) {
                both_skills++;
                acquired |= 3;
            } else if (mask == 2) {
                skill_1++;
                acquired |= 1;
            } else if (mask == 1) {
                skill_2++;
                acquired |= 2;
            }
            minutes += time;
        }
        if (acquired == 3) {
            cout << minutes << "\n";
        }
    }
    return 0;
}