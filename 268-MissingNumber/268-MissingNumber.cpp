// Last updated: 11/7/2025, 11:59:49 AM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int length = nums.size();

        for (int i = 0; i < length - 1; i++) {
            for (int j = 0; j < length - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    int temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < length; i++) {
            if (i != nums[i]) {
                return i;
            }
        }

        return length;
    }
};