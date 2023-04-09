class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){//binary search method
            for(int j=i+1; j<nums.size(); j++){//could've done hash map but lazy/more code
                if(nums[i]+nums[j] == target)return{i,j};
            }
        }
        return {};
    }
};