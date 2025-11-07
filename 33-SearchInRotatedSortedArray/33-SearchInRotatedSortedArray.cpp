// Last updated: 11/7/2025, 12:00:03 PM
class Solution {
public:
  int FindNum(vector<int> arr, int start,int end,int target){
   int mid = start + (end - start)/2;
    while(start <= end){
      if(arr[mid] == target){
        return mid;
      }
      if(arr[mid] > target){
        end = mid - 1;        
      } else{
        start = mid+1;
      }
      mid = start + (end - start)/2;
    }
    return -1;
  }

  int FindPivot(vector<int> arr){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end - start)/2;
    while(start < end){
      if(mid + 1 < arr.size() && arr[mid] > arr[mid+1]){
        return mid;
      }
      if(mid-1 >= 0 && arr[mid] < arr[mid-1]){
        return mid - 1;
      }
      if(arr[start] >= arr[mid]){
        end = mid-1;
      } else {
        start = mid;
      }
      mid = start + (end-start)/2;
    }
    return start;
  }
    int search(vector<int>& nums, int target) {
        int PivotIndex = FindPivot(nums);

        if(target >= nums[0] && target <= nums[PivotIndex]){      
        int ans = FindNum(nums, 0, PivotIndex, target);
        return ans;
        }
        if( PivotIndex+1 < nums.size() &&
         target >= nums[(PivotIndex+1)] && target <= nums[nums.size()-1]){
          int ans = FindNum(nums, PivotIndex + 1, nums.size() - 1, target);
          return ans;
        }
        return -1;
    }
};