/**
 * @param m: An integer m denotes the size of a backpack
 * @param A: Given n items with size A[i]
 * @return: The maximum size
 */
const backPack = function (m, A) {
    const dp = [1, ...Array(m).fill(0)]
    A.forEach(item => {
        for (let size = m; size > item - 1; --size) dp[size] |= dp[size - item]})
    return dp.lastIndexOf(1)
}
