#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define debug(x) for(auto i : x) {cout << i << " ";} cout << endl;
#define endl "\n"
#define mod 1000000007

using namespace std;

void setIO(string prob) {
    freopen((prob + ".in").c_str(), "r", stdin);
    freopen((prob + ".out").c_str(), "w", stdout);
}

string Hello = "Hello, world!";
vector<string> bottles = {"99 bottles of beer on the wall, 99 bottles of beer.",
                          "Take one down and pass it around, 98 bottles of beer on the wall.",
                          "98 bottles of beer on the wall, 98 bottles of beer.",
                          "Take one down and pass it around, 97 bottles of beer on the wall.",
                          "97 bottles of beer on the wall, 97 bottles of beer.",
                          "Take one down and pass it around, 96 bottles of beer on the wall."};

string solve(int n, vector<string> &x) {
    bool q = false;
    string ans;
    for (string s : x) {
        for (char r : s) {
            if (r == 'Q') {
                q = true;
                ans = s;
                break;
            }
        }
    }

    if (q) {
        vector<string> boop;
        for (char i : ans) {
            if (i == 'H') {
                boop.pb(Hello);
            } else if (i == '9') {
                for (string l : bottles) {
                    boop.pb(l);
                }
            } else if (i == 'Q') {
                boop.pb(ans);
            }
        }

        bool works = true;
        if (boop.size() == n) {
            for (int i = 0; i < n; i++) {
                if (boop[i] != x[i]) {
                    works = false;
                    break;
                }
            }
        } else {
            works = false;
        }

        if (works) {
            return ans;
        } else {
            return "IMPOSSIBLE";
        }
    }

    ans = "";
    bool works = true;

    for (int i = 0; i < x.size(); i++) {
        if (x[i] == Hello) {
            ans = ans + "H";
        } else if (x[i] == bottles[0]) {
            ans = ans + "9";
            if (i + 5 < x.size()) {
                for (int k = i; k < i + 6; k++) {
                    if (x[k] != bottles[k - i]) {
                        works = false;
                        break;
                    }
                }
                i += 5;
                if (!works) {
                    break;
                }
            } else {
                works = false;
                break;
            }
        } else {
            works = false;
            break;
        }
    }

    if (works) {
        return ans;
    } else {
        return "IMPOSSIBLE";
    }
}

int main() {
    // setIO("ioi");
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        cin.get();
        vector<string> X(N);
        for (int j = 0; j < N; j++) {
            getline(cin, X[j]);
        }
        cout << solve(N, X) << endl;
    }
    return 0;
}
