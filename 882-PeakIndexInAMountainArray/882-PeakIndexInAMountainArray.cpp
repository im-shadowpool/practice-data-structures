// Last updated: 11/7/2025, 11:59:43 AM
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
       int start = 0;
       int end = arr.size() - 1;
       int mid = start + (end - start) / 2;

        while(start < end){
          if(arr[mid] < arr[mid+1]){
            start = mid + 1;
          }else{
            end = mid;
          }
          mid = start + (end-start)/2;
        }
        return start;
    }
};