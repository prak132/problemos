class Solution {
    public long countExcellentPairs(int[] nums, int k) {
        HashMap<Integer,Set<Integer>> map = new HashMap<>();
        for(int i : nums){//hash maps yay
            int x = Integer.bitCount(i);
            map.putIfAbsent(x,new HashSet<>());
            map.get(x).add(i);
        }
        long ans = 0;
        HashSet<Integer> vis = new HashSet<>();
        for(int i : nums){
            if(vis.contains(i)) continue;
            int need = Math.max(0,k-Integer.bitCount(i));
            for(int key : map.keySet())
				if(key >= need) ans += (long) map.get(key).size();
            vis.add(i);
        }
        return ans; 
    }
}