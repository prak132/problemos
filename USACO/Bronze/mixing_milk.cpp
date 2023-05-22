#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    vector<int> capacity(3);
    vector<int> milk(3);
    int a,b;
    for (int i=0; i < 3; i++) {
        scanf("%d %d", &capacity[i], &milk[i]);
    }
    for (int j=0; j < 100; j++) {
        int b1 = j%3;
        int b2 = (j+1) % 3;
        int ans = min(milk[b1], capacity[b2]-milk[b2]);
        milk[b1] -= ans;
        milk[b2] += ans;
    }
    for (auto x: milk) {
        cout << x << '\n';
    }
    return 0;
}