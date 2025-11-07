// Last updated: 11/7/2025, 11:59:30 AM
class Solution {
public:
    int smallestEvenMultiple(int n) {
     int mul;
     for(int i=1; ; i++){
            mul = n*i;
            if(mul%2==0){
                return mul;
            }
        }


    }
};