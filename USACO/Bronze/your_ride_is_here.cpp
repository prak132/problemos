/*
ID: rathore6
TASK: ride
LANG: C++          
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("ride.in", "r", stdin);
    freopen("ride.out", "w", stdout);
	string s1, s2;
	cin >> s1 >> s2;
	int ans1 = 1;
	for (int i = 0; i < s1.size(); i++){
		ans1 *= s1[i] - 'A' + 1;
	} int ans2 = 1;
	for (int i = 0; i < s2.size(); i++){
		ans2 *= s2[i] - 'A' + 1;
	} cout << (ans1 % 47 == ans2 % 47 ? "GO" : "STAY") << endl;
	return 0;
}