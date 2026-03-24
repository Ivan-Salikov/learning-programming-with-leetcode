class Solution:
    def reverse(self, x: int) -> int:
        INT_MIN, INT_MAX = -2**31, 2**31 - 1
        
        sign = -1 if x < 0 else 1
        result = sign * int(str(abs(x))[::-1])
        
        return result if INT_MIN <= result <= INT_MAX else 0