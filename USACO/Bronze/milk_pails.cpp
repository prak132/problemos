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
            break; //check how many we can fill in bucket 1 and check if too much
        }
		for (int j = 0; j <= M; j++) { // check bucket 2 now
			int n = (X * i) + (Y * j);
			if (n > M) { //if ever greater 
                break; 
            }
			close = max(close, n);//check so when we iterate will check
		}
	}
    cout << close << "\n";
    return 0;
}