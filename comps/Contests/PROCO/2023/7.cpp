#include <iostream>
#include <vector>
#include <unordered_map>
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#pragma omp parallel for

int main() {
    std::ios_base::sync_with_stdio(false);std::cin.tie(nullptr);
    int n, k;std::cin >> n >> k;
    std::unordered_map<int, int> begins;
    std::vector<int> ends(n);
    std::vector<bool> used(n, false);
    std::vector<int> order;
    order.reserve(n);
    for (int i = 0; i < n; ++i) {
        int x, y;std::cin >> x >> y;
        begins[x] = i;
        ends[i] = ((1LL << k) - 1) ^ y;
    } int currs = (1LL << k) - 1;
    for (int i = 0; i < n; ++i) {
        int curr_idx = begins[currs];
        if (!used[curr_idx]) {
            order.push_back(curr_idx + 1);
            used[curr_idx] = true;
            currs = ends[curr_idx];
        }
    } for (int idx : order) {std::cout << idx << " ";}
    return 0;
}
