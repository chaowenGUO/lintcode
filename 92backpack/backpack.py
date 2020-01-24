import itertools

class Solution:
    """
    @param m: An integer m denotes the size of a backpack
    @param A: Given n items with size A[i]
    @return: The maximum size
    """
    def backPack(self, m, A):
        dp = [True, *itertools.repeat(False, m)]
        for item in A:
            for size in range(m, 0, -1): dp[size] |= dp[size - item] if size >= item else False
        return max(index for index, _ in enumerate(dp) if _ == True)
