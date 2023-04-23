class Solution {
    public int[] twoSum(int[] nums, int target) {
         for (int i = 0; i < nums.length; i++) { //brute force lol
            int diff = target - nums[i];
            for (int j = i+1; j < nums.length; j++) {
                if (diff == nums[j]) {
                    return new int[]{i, j};
                }
            }
        }
        return new int[] {-1, -1};
        
    }
}