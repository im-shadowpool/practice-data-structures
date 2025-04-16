#include <iostream>
#include <vector>
using namespace std;

//Intersectiomn of Two arrays


int main() {

    vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};
    vector<int> newArr;

    for(int i = 0; i < nums1.size(); i++){
      for(int j = 0; j < nums2.size(); j++){
        if(nums2[j] == nums1[i]){
          bool AlreadyExists = false;
          for(int k = 0; k < newArr.size(); k++){
            if(nums2[j] == newArr[k]){
              AlreadyExists = true;
              break;
            }
          }
          if(!AlreadyExists){
            newArr.push_back(nums1[i]);
          }
          break; 
        }
      }
    }

    for(int i = 0; i < newArr.size(); i++){
      cout << newArr[i] << " ";
    }


  return 0;
}


// class Solution {
//   public:
//       vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//           set<int> s1(nums1.begin(), nums1.end());
//           set<int> s2(nums2.begin(), nums2.end());
//           vector<int> res;
          
//           auto it1 = s1.begin();
//           auto it2 = s2.begin();
          
//           while (it1 != s1.end() && it2 != s2.end()) {
//               if(*it1 == *it2)
//               {
//                   res.push_back(*it1);
//                   ++it1;
//                   ++it2;
//               } 
//               else if(*it1 < *it2)
//               {
//                   ++it1;
//               } else {
//                   ++it2;
//               }
//           }
//           return res;
//       }
//   };
  
