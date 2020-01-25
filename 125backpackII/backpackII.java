public class Solution {
    /**
     * @param m: An integer m denotes the size of a backpack
     * @param A: Given n items with size A[i]
     * @param V: Given n items with value V[i]
     * @return: The maximum value
     */
    public int backPackII(int m, int[] A, int[] V) {
        final int[] dp = new int[m + 1];
        java.util.stream.IntStream.range(0, A.length).forEach(index -> java.util.stream.IntStream.range(A[index], m + 1).boxed().sorted(Comparator.reverseOrder()).forEach(size -> dp[size] = Math.max(dp[size], dp[size - A[index]] + V[index])));
        return dp[dp.length - 1];
    }
}
