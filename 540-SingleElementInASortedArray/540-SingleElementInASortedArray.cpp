// Last updated: 11/7/2025, 11:59:45 AM
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end-start)/2;
        while(start <= end){
          if(start == end) return nums[mid];
          if(mid % 2 == 0){
            if(nums[mid] == nums[mid+1]){
              start = mid + 1;
            } else {
              end = mid;
            }
          }
          if(mid % 2 == 1){
            if(nums[mid] == nums[mid-1]){
              start = mid + 1;
            } else {
              end = mid - 1;
            }
          }
          mid = start + (end-start)/2;
        }
        return -1;
    }
};