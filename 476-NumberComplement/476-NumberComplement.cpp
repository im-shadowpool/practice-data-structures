// Last updated: 11/7/2025, 11:59:46 AM
class Solution {
public:
    int findComplement(int num) {
        
        int m = num;
        int mask = 0;
        
        while(m!=0){
            mask = (mask << 1) |1;
            m = m>>1;
            }
        int ans = (~num) &mask;
        return ans;
        
        
    }
};