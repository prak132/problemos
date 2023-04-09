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
        sort(dice.begin(), dice.end()); // Sort the numbers in ascending order
        int best = -1, bestCount = -1; // Initialize variables to track the best number and its count
        for (int i = 0; i < n; i++) {
            int count = 1;
            while (i + 1 < n && dice[i] == dice[i + 1]) { // Count how many times this number appears
                count++;
                i++;
            }
            if (count > bestCount) { // If this number appears more times than the current best, update the best
                best = dice[i];
                bestCount = count;
            }
        }
        cout << best << endl;
    }
    return 0;
}
