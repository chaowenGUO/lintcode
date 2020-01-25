public class Solution {
    /**
     * @param nums: an integer array and all positive numbers, no duplicates
     * @param target: An integer
     * @return: An integer
     */
    public int backPackIV(int[] nums, int target) {
        // write your code here
        final int dp[] = new int[target + 1];
        dp[0] = 1;
        Arrays.stream(nums).forEach(item -> java.util.stream.IntStream.range(item, target + 1).forEach(size -> dp[size] += dp[size - item]));
        return dp[dp.length - 1];
    }
}
