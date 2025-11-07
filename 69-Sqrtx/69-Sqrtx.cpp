// Last updated: 11/7/2025, 11:59:58 AM
class Solution {
public:
    int mySqrt(int x) {
        int start = 0;
        int end = x;
       long int mid = start + (end-start)/2;
        int ans = 0;
        while(start <= end){
          
          if(mid*mid == x) return mid;
          if(mid*mid <= x){
            ans = mid;
            start = mid + 1;
          } else end = mid - 1;
          mid = start + (end-start)/2;
        }
        return ans;
    }
};