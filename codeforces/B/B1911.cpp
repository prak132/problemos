#include <iostream>
using namespace std;

void solve(int n, const string &t) {
    string s;
    int i = 0;
    while (i < n) {
        s += t[i];
        i += s.length();
    } cout << s << endl;
}

int main() {
    int n; cin >> n;
    string t; cin >> t;
    solve(n, t);
    return 0;
}

/*
kotlin
import java.util.Scanner
 
fun solve(n: Int, t: String) {
    var s = ""
    var i = 0
    while (i < n) {
        s += t[i]
        i += s.length
    }
    println(s)
}
 
fun main() {
    val scanner = Scanner(System.`in`)
    val n = scanner.nextInt()
    val t = scanner.next()
    solve(n, t)
}
*/