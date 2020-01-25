import itertools

class Solution:
    """
    @param m: An integer m denotes the size of a backpack
    @param A: Given n items with size A[i]
    @return: The maximum size
    """
    def backPack(self, m, A):
        dp = [1, *itertools.repeat(0, m)]
        for item in A:
            for size in range(m, item - 1, -1): dp[size] |= dp[size - item]
        return max(index for index, _ in enumerate(dp) if _ == 1)
