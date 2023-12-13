#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    } sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 0; i < n; i += 2) {
        ans += v[i + 1] - v[i];
    } cout << ans << endl;

}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t=1;
    while (t--) {solve();}
    return 0;
}

/*
kotlin
fun main() {
    val n = readLine()!!.toInt()
    val skills = readLine()!!.split(" ").map { it.toInt() }.sorted()
 
    var totalProblems = 0
    for (i in 0 until n step 2) {
        totalProblems += skills[i + 1] - skills[i]
    }
 
    println(totalProblems)
}
*/