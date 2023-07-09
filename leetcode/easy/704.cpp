#include <bits/stdc++.h>
class 704 {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = int(nums.size()) - 1;//standard binary search yay
        while (l <= r) {
            int mid = l+(r-l)/2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                l = mid+1;
            } else {
                r = mid-1;
            }
        }
        return -1;
    }
};