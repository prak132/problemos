#include <bits/stdc++.h>
using namespace std;
int k, n; 
int arr[10][20];

void setIO(string name = "") {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	if (name.size()) {
		freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

bool check(int a, int b) {
    for (int i = 0; i < k; i++) {
        bool a_better = false;
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == a) {a_better = true;}
            if (arr[i][j] == b && a_better) {return false;}
        }
    } return true;
}

int main() {
    setIO("gymnastics");
    cin >> k >> n;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    } int answer = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (check(i, j)) {answer++;}
        }
    } cout << answer << endl;
    return 0;
}
