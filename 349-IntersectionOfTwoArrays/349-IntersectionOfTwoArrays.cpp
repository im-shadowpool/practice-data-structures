// Last updated: 11/7/2025, 11:59:47 AM
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> newArr;

        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++){
                if(nums2[j] == nums1[i]){
                    bool alreadyExists = false;
                    for(int k = 0; k < newArr.size(); k++){
                        if(nums2[j] == newArr[k]){
                            alreadyExists = true;
                            break;
                        }
                    }
                    if(!alreadyExists){
                        newArr.push_back(nums2[j]);
                    }
                    break;
                }
            }
        }

        return newArr;


    }
};