class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> map;

        // Pass 1: Store value -> index
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]] = i;
        }

        // Pass 2: Find complement
        for (int i = 0; i < nums.size(); i++) {

            int complement = target - nums[i];

            if (map.find(complement) != map.end()
                && map[complement] != i) {

                return {i, map[complement]};
            }
        }

        return {};
    }
};