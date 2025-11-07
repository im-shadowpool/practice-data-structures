// Last updated: 11/7/2025, 11:59:35 AM
class Solution {
public:
    int minimumSum(int num) {
        int n = num;
         int a[4] = {n / 1000, n / 100 % 10, n / 10 % 10, n % 10};
        sort(a,a + 4);
        return a[0] * 10 + a[1] * 10 + a[2] + a[3];
    }
};