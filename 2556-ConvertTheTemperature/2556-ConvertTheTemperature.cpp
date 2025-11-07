// Last updated: 11/7/2025, 11:59:31 AM
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double k,f;
        k = celsius + 273.15;
        f = celsius * 1.80 + 32.00;
      vector<double> arr;
      arr.push_back(k);
      arr.push_back(f);
      return arr;
    }
};