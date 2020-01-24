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
            for (std::size_t size{m}; size != 0; --size) dp.at(size) |= size >= item ? dp.at(size - item) : 0;
        return -std::distance(std::crend(dp), std::find(std::crbegin(dp), std::crend(dp), 1)) - 1;
    }
};
