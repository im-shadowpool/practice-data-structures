// Last updated: 11/7/2025, 11:59:57 AM
class Solution {
public:
    int climbStairs(int n) {

        if(n==1) return 1;
        if(n==0) return 0;

        int first = 1, second = 2;
        for(int i = 3; i<=n; i++){
            int third = first + second;
            first = second;
            second = third;
        }
        return second;     
        
        
    }
};