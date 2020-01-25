public class Solution {
    /**
     * @param m: An integer m denotes the size of a backpack
     * @param A: Given n items with size A[i]
     * @return: The maximum size
     */
    public int backPack(int m, int[] A) {
        // write your code here
        final int[] dp = new int[m + 1];
        dp[0] = 1;
        Arrays.stream(A).forEach(item -> java.util.stream.IntStream.range(item, m + 1).boxed().sorted(Comparator.reverseOrder()).forEach(size -> dp[size] |= dp[size - item]));
        return Arrays.stream(dp).boxed().collect(java.util.stream.Collectors.toList()).lastIndexOf(1);
    }
}
