#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> result;

    for (int i : arr) {
        if (i < 0) {
            result.push_back(i);
        } else {
            result.insert(result.end(), i);
        }
    }

    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}