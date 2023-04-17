#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);
    int X, Y;
	int M;
	cin >> X >> Y >> M;
	int close = 0;
	for (int i = 0; i <= M; i++) {
		if (X * i > M) { 
            break; 
        }
		for (int j = 0; j <= M; j++) {
			int n = (X * i) + (Y * j);
			if (n > M) {
                break; 
            }
			close = max(close, n);
		}
	}
    cout << close << "\n";
    return 0;
}