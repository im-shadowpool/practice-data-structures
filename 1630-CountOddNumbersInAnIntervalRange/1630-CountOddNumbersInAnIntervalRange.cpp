// Last updated: 11/7/2025, 11:59:38 AM
class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;
        for(low; low<=high; low++){
            if(low&1) count++;
            }
        return count;
        
    }
};