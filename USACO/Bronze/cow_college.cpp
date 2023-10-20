#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
	int a, big=0, curr=0; cin >> a;
	int arr[a];
	for (int i = 0; i < a; i++) {
		cin >> arr[i];
	} sort(arr, arr+a);
	int x = a;
	for (int i = 0; i < a; i++) {
		int money = arr[i]*x;
		if (money > big) {curr = arr[i]; big = money;}
		x--;
	} cout << big << " " << curr << endl;
}