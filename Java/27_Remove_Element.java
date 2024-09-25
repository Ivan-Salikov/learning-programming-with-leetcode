class Solution {
    public int removeElement(int[] nums, int val) {
        int i = 0, length = nums.length;
        for (int j = 0; j < length; ++j) {
            if  (nums[j] != val) {
                nums[i++] = nums[j];
            }
        }
        return i;
    }
}
