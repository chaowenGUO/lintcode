class Solution {
public:
    /**
     * @param m: An integer m denotes the size of a backpack
     * @param A: Given n items with size A[i]
     * @return: The maximum size
     */
    int backPack(int m, vector<int> &A) {
        // write your code here
        std::vector<int> dp(m + 1);
        dp.front() = 1;
        for (auto const item: A)
            for (std::size_t size{m}; size > item - 1; --size) dp.at(size) |= dp.at(size - item);
        return std::distance(std::find(std::crbegin(dp), std::crend(dp), 1), std::crend(dp)) - 1;
    }
};
