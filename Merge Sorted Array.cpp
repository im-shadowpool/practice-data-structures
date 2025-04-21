// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Write C++ code here
    vector<int> nums1 = {1};
    vector<int> nums2 = {};
    int m = 1, n = 0;
    
    
    int i = m - 1, j = n - 1, k = m+n-1;
    
    while(i>=0 && j>=0){
        if(nums1[i] > nums2[j]){
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }
    
    while(j>=0){
        nums1[k--] = nums2[j--];
    }

    
    for(int i = 0; i < nums1.size(); i++){
        cout << nums1[i] << ", ";
    }
    
    
    return 0;
}
