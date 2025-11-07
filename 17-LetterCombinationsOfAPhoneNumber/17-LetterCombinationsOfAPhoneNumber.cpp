// Last updated: 11/7/2025, 12:00:05 PM
class Solution {
private:
void solve(string digits, int index, string output, string characters[], vector<string>& answer){
        if(index >= digits.length()){
        answer.push_back(output);
        return;
    }
    int digit = digits[index] - '0';
    string value = characters[digit];


    for(int i = 0; i < value.length(); i++){
        output.push_back(value[i]);
        solve(digits, index+1, output, characters, answer);
        output.pop_back();
    }

}
public:
    vector<string> letterCombinations(string digits) {
        vector<string> answer;
        if (digits.empty()) return answer; 
        int index = 0;
        string output = "";
    
        string characters[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, index, output, characters, answer);
        return answer;
    }
};