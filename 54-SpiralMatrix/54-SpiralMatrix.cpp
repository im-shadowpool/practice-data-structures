// Last updated: 11/7/2025, 12:00:02 PM
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
  
        int total = matrix.size()*matrix[0].size();
        vector <int> arr;
        int startingRow = 0;
        int endingCol = matrix[0].size()-1;
        int endingRow = matrix.size()-1;
        int startingCol = 0;
        int count = 0;
        while(count < total){
          for(int i = startingCol; i <= endingCol && count < total; i++){
            arr.push_back(matrix[startingRow][i]);
            count++;
          }
          startingRow++;

          for(int i = startingRow; i <= endingRow && count < total; i++){
            arr.push_back(matrix[i][endingCol]);
            count++;
          }
          endingCol--;

          for(int i = endingCol; i >= startingCol && count < total; i--){
            arr.push_back(matrix[endingRow][i]);
            count++;
          }
          endingRow--;

          for(int i = endingRow; i >= startingRow && count < total; i--){
            arr.push_back(matrix[i][startingCol]);
            count++;
          }
          startingCol++;
        }
  return arr;
    }
};