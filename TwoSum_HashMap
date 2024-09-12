class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> numMap = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            numMap.put(nums[i], i);
        }

        for(int j = 0; j < nums.length; j++){
            if (numMap.containsKey(target - nums[j]) && numMap.get(target - nums[j]) != j) {
                return new int[] {j, numMap.get(target - nums[j])};
            }
        }

        return new int[] {};
    }
}
