// Last updated: 11/7/2025, 11:59:42 AM
class Solution {
public:
    int bitwiseComplement(int n) {
        
        int m = n;
        int mask = 0;
        
        if(n ==0){
            return 1;
        }
        
        while(m!= 0){
            mask = (mask << 1) | 1;
            m = m >> 1;
            
        }
        
        int ans = (~n) & mask;
        return ans;
        
    }
};