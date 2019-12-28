class Solution:
    """
    @param m: An integer m denotes the size of a backpack
    @param A: Given n items with size A[i]
    @param V: Given n items with value V[i]
    @return: The maximum value
    """
    
    def backPackII(self, m, A, V):
        # write your code here
        dp = [0 for _ in range(m + 1)]
        for item in zip(A, V):
            for i in range(m, item[0] - 1, -1): dp[i] = max(dp[i], dp[i - item[0]] + item[1])
        return dp[-1]
