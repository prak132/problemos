class Solution {
    public int[] twoSum(int[] nums, int target) {
         for (int i = 0; i < nums.length; i++) {//simple binary search approach
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