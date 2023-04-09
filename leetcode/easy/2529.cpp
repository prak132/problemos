class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int p = 0, n = 0;//too lazy to impl binary search
        for(auto &i: nums){
            if(i>0){
                p++;
            }
            else if(i<0) {
                n++;
            }
        } return max(p,n);
    }
};