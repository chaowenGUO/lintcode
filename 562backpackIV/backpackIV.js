/**
 * @param nums: an integer array and all positive numbers, no duplicates
 * @param target: An integer
 * @return: An integer
 */
const backPackIV = function (nums, target) {
    const dp = [1, ...Array(target).fill(0)]
    nums.forEach(item => {
        for (let size = 1; !Object.is(size, target + 1); ++size) dp[size] += size >= item ? dp[size - item] : 0})
    return dp[dp.length - 1]
}
