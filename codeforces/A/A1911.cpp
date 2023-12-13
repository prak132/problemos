#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve() {
    int n,ans; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	} if (arr[0] != arr[1] && arr[0] != arr[n - 1]) {
        ans = 1;
    } else if (arr[n - 1] != arr[n - 2] && arr[n - 1] != arr[0]) {
        ans = n;
    } else {
        for (int i = 1; i < n - 1; i++) {
            if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1]) {
                ans = i + 1;
                break;
            }
        }
    } cout << ans << endl;
}



int main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {solve();}
    return 0;
}

/*
kotlin
fun solve() {
    val n = readLine()!!.toInt()
    val arr = readLine()!!.split(" ").map { it.toInt() }.toIntArray()
    var ans = 0
 
    if (arr[0] != arr[1] && arr[0] != arr[n - 1]) {
        ans = 1
    } else if (arr[n - 1] != arr[n - 2] && arr[n - 1] != arr[0]) {
        ans = n
    } else {
        for (i in 1 until n - 1) {
            if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1]) {
                ans = i + 1
                break
            }
        }
    }
 
    println(ans)
}
 
fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        solve()
    }
}
*/