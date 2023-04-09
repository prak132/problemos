class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> temp;//was going to impl hashmap
        for(int i=0;i<nums.size();i++){// binary search is atleast O(n^2)
            temp.push_back({nums[i],i});
        }
        sort(temp.begin(),temp.end());
        int x=0,y=nums.size()-1;
        while(x<y){
            int sum=temp[x].first+temp[y].first;
            if(sum==target)
                return {temp[x].second,temp[y].second};
            else if(sum<target)
                x++;
            else{
                y--;
            }
        }
        return {-1,-1};
    }
};