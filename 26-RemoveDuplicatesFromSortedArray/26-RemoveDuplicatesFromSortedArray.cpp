// Last updated: 11/7/2025, 12:00:06 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    
    int count = 1;

    for(int i = 1; i < nums.size(); i++){
        if(nums[i-1] != nums[i]){
            nums[count++] = nums[i];
        }
    }

    return count;

        // int n = nums.size(), count = nums.size();
        
        // for(int i = n - 1; i > 0; i--){
        //     if(nums[i] == nums[i-1]){
        //         int j = i;
        //         while(j+1 < n){
        //             nums[j] = nums[j+1];
        //             j++;
        //         }
        //         nums[n-1] = -1;
        //         n--;
        //     }
        // }
        // return n;
    }
};