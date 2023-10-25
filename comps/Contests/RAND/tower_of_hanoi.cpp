#include <bits/stdc++.h>
using namespace std;

void solve(int n, char s, char a, char d) {
    if (n == 1) {
        cout << "Disk 1 moved from " << s << " to " << d << '\n';
        return;
    } solve(n-1, s, d, a);
    cout << "Disk " << n << "moved from " << s << " to " << d << '\n';
    solve(n-1, a, s, d);
}

int main() {
	int n; cin >> n;
	solve(n,'A','B','C');
	return 0;
}

/*
approach
aux rod def rod which we use for moving
shift n - 1 disks from the source rod to an aux rod.
move the remaining disk to the destination rod.
shift n - 1 disks from the aux rod to the destination rod.
*/