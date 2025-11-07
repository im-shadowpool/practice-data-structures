// Last updated: 11/7/2025, 11:59:37 AM
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
       // int size = 6; //sizeof(nums)/sizeof(nums[0]);
        for(int i = 0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
                if(nums[i]==nums[j]) count++;
            }
                        
        }
    return count;

    }
};