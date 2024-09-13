class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> numMap;
        for (int i = 0; i < nums.size(); i++) {
            int difference = target - nums[i];
            if (numMap.find(difference) != numMap.end()) {
                return {numMap[difference], i};
            }
            numMap[nums[i]] = i;
        }
        return {};
    }
};
