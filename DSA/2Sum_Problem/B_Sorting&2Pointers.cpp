class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;


        //Revisit

        while (left < right) {
            int current_sum = nums[left] + nums[right];

            if (current_sum == target) {
                return {left, right};
            }
            else if (current_sum < target) {
                left++;
            }
            else {
                right--;
            }
        }

        return {};
    }
};