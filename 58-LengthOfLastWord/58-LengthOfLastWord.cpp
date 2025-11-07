// Last updated: 11/7/2025, 12:00:01 PM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i, TotalLength;
        TotalLength = s.length()-1;
        while(s[TotalLength]==' '){
            TotalLength--;
        }
        for(i=0; i<=TotalLength; i++){
            if(s[TotalLength-i] == ' ') return i;
        }
        return i;
    }
};