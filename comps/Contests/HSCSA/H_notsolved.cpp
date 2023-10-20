#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int n) {
    int sqrt_n = static_cast<int>(sqrt(n));
    return sqrt_n * sqrt_n == n;
}

int main() {
    int n;
    cin >> n;
    int s1 = 3, s2 = 2;
    vector<int> ans;

    if (n > 500) {
        int r = static_cast<int>(sqrt(2 * n));
        int s = static_cast<int>(sqrt(14 * n / 3));
        if (s % 2 != r % 2) s -= 1;

        int a = n + (s * s - 3 * r * r) / 2;
        int b = 4 * r * r - 3 * n - s * s;

        for (int i = 0; i < a; ++i) ans.push_back(3);
        for (int i = 0; i < b; ++i) ans.push_back(2);
        for (int i = 0; i < n - a - b; ++i) ans.push_back(1);
    } else if (n > 50) {
        bool found = false;
        for (int a = 0; a <= n; ++a) {
            for (int b = 0; b <= n - a; ++b) {
                if (isPerfectSquare(s1 * a + s2 * b + n - a - b) && isPerfectSquare(s1 * s1 * a + s2 * s2 * b + n - a - b)) {
                    for (int i = 0; i < a; ++i) ans.push_back(3);
                    for (int i = 0; i < b; ++i) ans.push_back(2);
                    for (int i = 0; i < n - a - b; ++i) ans.push_back(1);
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
    } else {
        vector<int> a(n, 1);
        while (true) {
            vector<int> asq = a;
            for (int i = 0; i < asq.size(); ++i) asq[i] *= asq[i];
            if (isPerfectSquare(accumulate(asq.begin(), asq.end(), 0)) && isPerfectSquare(accumulate(a.begin(), a.end(), 0))) {
                ans = a;
                break;
            }
            for (int i = 0; i < n; ++i) {
                if (a[i] == 100) {
                    a[i] = 1;
                } else {
                    a[i] += 1;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i];
        if (i < ans.size() - 1) cout << ' ';
    }
    cout << endl;

    return 0;
}
