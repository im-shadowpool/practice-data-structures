// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Write C++ code here
    vector<int> nums = {1,1,2,4};
    
    int count = 1;
    
    for(int i = 1; i < nums.size(); i++){
        if(nums[i-1] != nums[i]){
            nums[count++] = nums[i];
        }
    }
    
    
    
    // int n = nums.size();
    // int count = nums.size();
    
    // for(int i = n-1; i > 0; i--){
    //     if(nums[i] == nums[i-1]){
    //         cout << nums[i] << " ";
    //         int temp = nums[i];
    //         int j = i;
    //         while(j < n-1){
    //             nums[j] = nums[j+1];
    //             j++;
    //         }
    //         nums[n-1] = -1;
    //         n--;
    //         count--;
    //     }
    // }
    
    
    //  cout << endl;
    // for(int i = 0; i < nums.size(); i++){
    //     cout << nums[i] << ", ";
    // }
    //      cout << endl;
    //           cout << count << " " << n;
    

    return 0;
}
