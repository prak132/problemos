#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> dice(n);
        for (int i = 0; i < n; i++) {
            cin >> dice[i];
        }
        sort(dice.begin(), dice.end());
        int best = -1, bestCount = -1;
        for (int i = 0; i < n; i++) {
            int count = 1;
            while (i + 1 < n && dice[i] == dice[i + 1]) {
                count++;
                i++;
            }
            if (count > bestCount) {
                best = dice[i];
                bestCount = count;
            }
        }
        cout << best << endl;
    }
    return 0;
}
