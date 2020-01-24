/**
 * @param nums: an integer array and all positive numbers
 * @param target: An integer
 * @return: An integer
 */
const backPackV = function (nums, target) {
    const dp = [1, ...Array(target).fill(0)]
    nums.forEach(item => {
        for (let size = target; !Object.is(size, 0); --size) dp[size] += size >= item ? dp[size - item] : 0})
    return dp[dp.length - 1]
}
