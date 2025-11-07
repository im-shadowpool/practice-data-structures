// Last updated: 11/7/2025, 11:59:50 AM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        for(int i=0; i <= 30; i++){
            int ans = pow(2,i);
            if(n == ans){
                return true;
            }
        }
        return false;
        
    }
};