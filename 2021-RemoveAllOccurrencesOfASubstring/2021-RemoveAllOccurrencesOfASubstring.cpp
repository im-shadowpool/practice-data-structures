// Last updated: 11/7/2025, 11:59:36 AM
class Solution {
public:
    string removeOccurrences(string s, string part) {
       int found = s.find(part);
       while(found >=0){
          s.erase(found, part.length());
          found = s.find(part);
       }
       return s;
    }
};