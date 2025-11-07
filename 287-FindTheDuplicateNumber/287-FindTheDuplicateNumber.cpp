// Last updated: 11/7/2025, 11:59:48 AM
class Solution {
public:
  int findDuplicate(vector<int>& nums) {
// #include <iostream> //Find the Duplicate element in range 1,n leetcode 
// #include <vector> 
// using namespace std;
// //1. Not worked for leetcode time exceed linear search
// int findDup(vector<int> arr){
//   for(int i = 0; i < arr.size(); i++){
//     for(int j = i+1; j < arr.size(); j++){
//         if(arr[i] == arr[j]){
//          return arr[i];
//         }
//     }
//   }
//   return -1;
// }

// int main() {
//   vector<int> arr= {5,1,3,6,2, 6};
//   int ans = findDup(arr);
//   cout << ans;
// }

// //2. Second Way  sort and search i+1

// #include <iostream>
// #include <algorithm> 
// #include <vector> 
// using namespace std;

// int findDup(vector<int> arr){
//   for(int i = 0; i < arr.size() - 1; i++){
//       if(arr[i] == arr[i+1]){
//         return arr[i];
//       }
//     }
//   return -1;
// }

// int main() {
//   vector<int> arr= {3,3,1,0,2,5};
//   sort(arr.begin(), arr.end());
//   int ans = findDup(arr);
//  cout << ans;
// }

// //3. Negetive index marking

// #include <iostream>
// #include <algorithm> 
// #include <vector> 
// using namespace std;

// int findDup(vector<int> arr){
//  for(int i = 0; i < arr.size(); i++){
//   int index = abs(arr[i]);
//   if(arr[index] < 0){
//     return index;
//   }
//   arr[index] *= -1;
//  }
//   return -1;
// }

// int main() {
//   vector<int> arr= {3,3,1,0,2,5};
//   int ans = findDup(arr);
//  cout << ans;
// }

// //index 0 swapping
// #include <iostream>
// #include <algorithm> 
// #include <vector> 
// using namespace std;

// int findDup(vector<int> arr){
//   while(arr[0] != arr[arr[0]]){
//     swap(arr[arr[0]], arr[0]);
//   }
//   return arr[0];
// }

// int main() {
//   vector<int> arr= {4,5,5,3,2,1};
//   int ans = findDup(arr);
//  cout << ans;
// }
  while(nums[0] != nums[nums[0]]){
    swap(nums[nums[0]], nums[0]);
  }
  return nums[0];
  }
};