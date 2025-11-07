// Last updated: 11/7/2025, 12:00:04 PM
class Solution {
public:

  int divide(int dividend, int divisor) {

    if(dividend == INT_MIN && divisor == -1) return INT_MAX;
    if(dividend == INT_MIN && divisor == 1) return INT_MIN;

  long int dd = abs(dividend), dv = abs(divisor);    
  long int start = 0;
  long int end = abs(dd);
  long int mid = start + (end-start)/2;
  int ans = -1;
  while(start <= end){
    if(mid*abs(dv) <= abs(dd)){
      ans = mid;
      start = mid + 1;
    } else {  
      end = mid - 1;
    }
    mid = start + (end-start)/2;
  }
  if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) return -ans;
  return ans;
    }
};