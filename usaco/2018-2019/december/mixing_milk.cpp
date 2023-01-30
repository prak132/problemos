#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

const int N = 3;
const int TURN_NUM = 100;

int main() {
    freopen("mixmilk.in", "r", stdin);
    vector<int> capacity(N);
    vector<int> milk(N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &capacity[i], &milk[i]);
	}
    for (int i = 0; i < TURN_NUM; i++) {
    int bucket1 = i % N;
    int bucket2 = (i + 1) % N;
    int amt = min(milk[bucket1], capacity[bucket2] - milk[bucket2]);
    milk[bucket1] -= amt;
    milk[bucket2] += amt;
    }
	freopen("mixmilk.out", "w", stdout);
	for (int m : milk) {
		cout << m << '\n';
	}


}