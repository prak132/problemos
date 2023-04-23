#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int trees[n];
    trees[0] = 0;
    cin >> trees[1];
    for (int i = 2;i < n+1;i++) {
        int temp;
        cin >> temp;
        trees[i] = temp + trees[i-1];
    }
    int answer = 0;
    for (int i = 0;i < m;i++) {
        int a, b;
        cin >> a >> b;
        answer += trees[b] - trees[a-1];
    }
    cout << answer << endl;
}
/*
4 2
2 1 6 1
1 2
2 4
*/