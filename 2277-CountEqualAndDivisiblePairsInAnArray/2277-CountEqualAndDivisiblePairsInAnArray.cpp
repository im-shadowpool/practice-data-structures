// Last updated: 11/7/2025, 11:59:34 AM
class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int count = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j] && !((i * j) % k)) count++;
            }
        }

        return count;
    }
};