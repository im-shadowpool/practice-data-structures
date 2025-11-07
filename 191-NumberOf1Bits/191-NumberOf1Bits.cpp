// Last updated: 11/7/2025, 11:59:53 AM
class Solution {
public:
    int hammingWeight(uint32_t n) {
        
    int count=0;
    

    for (; n!=0 ;)
    {
        if (n & 1 == 1)
        {
            count++;
        }
        n = n >> 1;
    }
        return count;
        
    }
};