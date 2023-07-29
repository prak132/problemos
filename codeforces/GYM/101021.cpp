#include <bits/stdc++.h>
using namespace std;

int main() {
    int l = 1, r = 1000000;
    while (l != r) {
        int mid = (l + r + 1) / 2;
        cout << mid << endl;
        fflush(stdout);
        char res[3];
        cin >> res;
        if (strcmp(res, "<") == 0) {
            r = mid - 1;
        } else {
            l = mid;
        }
    }

    cout << "! " << l << endl;
    fflush(stdout);
}