# Last updated: 11/7/2025, 12:00:09 PM
class Solution:
    def isPalindrome(self, x: int) -> bool:
        myString=str(x)
        for i in range(len(myString)//2):
            if myString[i]==myString[~i]:
                continue
            else: return False
        return True