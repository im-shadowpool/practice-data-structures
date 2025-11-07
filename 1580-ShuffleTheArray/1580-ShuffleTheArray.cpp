// Last updated: 11/7/2025, 11:59:39 AM
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       
        // int arr[] = new int[2*n];
        //  for(int i = 0, j = 0; j<n ; j++){
        //      arr[i] = nums[j];
        //      i += 2;
        //  }    
        //  for(int i = 1, p = n; p<n*2; p++){
        //      arr[i] = nums[p];
        //      i +=2;
        //  }
       
        //  return arr;

        
        
        int i=0 , j=nums.size()/2 , k=0;
		
        vector<int> a(nums.size());
		
        while(k < nums.size())
            a[k++] = k&1 ? nums[j++] : nums[i++];
        return a;
    }
        

    
};