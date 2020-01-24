/**
 * @param m: An integer m denotes the size of a backpack
 * @param A: Given n items with size A[i]
 * @return: The maximum size
 */
const backPack = function (m, A) {
    const dp = [1, ...Array(m).fill(0)]
    A.forEach(item => {
        for (let size = m; !Object.is(size, 0); --size) dp[size] |= size >= item ? dp[size - item] : 0})
    return dp.lastIndexOf(1)
}
