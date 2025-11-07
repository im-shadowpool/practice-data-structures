// Last updated: 11/7/2025, 11:59:40 AM
class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int product = 1, sum = 0;
        while(n!=0){
            int digit = n%10;
            n = n/10;
            product = product * digit;
            sum = sum + digit;
        }
        return product - sum;

    }
};