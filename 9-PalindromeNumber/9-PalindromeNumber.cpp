// Last updated: 11/7/2025, 12:00:08 PM
class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0) return false;
        long long int ans = 0;
        int n = x, isDigit;
        while(n!=0){
            isDigit = n%10;
            ans = ans*10 + isDigit;
            n = n/10;
            }
        if(ans==x) return true;
        else return false;
        
    }
};