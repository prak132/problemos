#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int n, m, k, H;
        cin >> n >> m >> k >> H;

        vector<int> heights(n);
        for (int i = 0; i < n; ++i) {
            cin >> heights[i];
        }

        int conversations = 0;
        for (int i = 0; i < n; ++i) {
            int height_diff = abs(heights[i] - H);
            if (height_diff % k == 0 && height_diff != 0) {
                conversations++;
            }
        }

        cout << conversations << endl;
    }

    return 0;
}
