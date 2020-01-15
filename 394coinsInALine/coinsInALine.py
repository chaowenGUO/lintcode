class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0 or not x % 10 and x: return False
        else:
            result = 0
            while result < x:
                result = result * 10 + x % 10
                x //= 10
            return result == x or result // 10 == x
