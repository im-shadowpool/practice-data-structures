// Last updated: 11/7/2025, 11:59:51 AM
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> arr;
        for(int i = 0; i < nums.size(); i++){
            if(i+1<nums.size() && (nums[i]+1) == nums[i+1]){
                int j = i;
                while(j+1<nums.size() && nums[j]+1 == nums[j+1]){
                    j++;
                }
                arr.push_back(to_string(nums[i]) + "->" + to_string(nums[j]));
                i = j;
            } else{
                 arr.push_back(to_string(nums[i]));
            }

        }
        return arr;
    }
};