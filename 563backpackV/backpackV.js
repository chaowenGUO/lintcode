/**
 * @param nums: an integer array and all positive numbers
 * @param target: An integer
 * @return: An integer
 */
const backPackV = function (nums, target) {
    const dp = [1, ...Array(target).fill(0)]
    nums.forEach(item => {
        for (let size = target; size > item - 1; --size) dp[size] += dp[size - item]})
    return dp[dp.length - 1]
}
