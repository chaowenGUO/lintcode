/**
 * @param nums: an integer array and all positive numbers, no duplicates
 * @param target: An integer
 * @return: An integer
 */
const backPackIV = function (nums, target) {
    const dp = [1, ...Array(target).fill(0)]
    nums.forEach(item => {
        for (let size = item; !Object.is(size, target + 1); ++size) dp[size] += dp[size - item]})
    return dp[dp.length - 1]
}
