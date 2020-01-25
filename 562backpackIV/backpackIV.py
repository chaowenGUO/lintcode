import itertools

class Solution:
    """
    @param nums: an integer array and all positive numbers, no duplicates
    @param target: An integer
    @return: An integer
    """
    def backPackIV(self, nums, target):
        # write your code here
        dp = [1, *itertools.repeat(0, target)]
        for item in nums:
            for size in range(1, target + 1): dp[size] += dp[size - item] if size >= item else 0
        return dp[-1]
