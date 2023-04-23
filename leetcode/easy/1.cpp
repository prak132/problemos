class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;//ez map sol
        int on = 0;
        for(int i = 0; i < nums.size(); i++){
            on = target - nums[i];
            if(m.count(on)) {return {m[on],i};}
            else {m.insert({nums[i],i});}
        }
        return {};
    }
};