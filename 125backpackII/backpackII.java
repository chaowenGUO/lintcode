public class Solution {
    /**
     * @param m: An integer m denotes the size of a backpack
     * @param A: Given n items with size A[i]
     * @param V: Given n items with value V[i]
     * @return: The maximum value
     */
    public int backPackII(int m, int[] A, int[] V) {
        final List<Integer> dp = Collections.nCopies(m + 1, 0).stream().collect(java.util.stream.Collectors.toList());
        java.util.stream.IntStream.range(0, A.length).forEach(i -> {
            for (int j = m; j != A[i] - 1; --j) dp.set(j, Math.max(dp.get(j), dp.get(j - A[i]) + V[i]));});
        return dp.get(dp.size() - 1);
    }
}
