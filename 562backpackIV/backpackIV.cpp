class Solution {
public:
    /**
     * @param nums: an integer array and all positive numbers, no duplicates
     * @param target: An integer
     * @return: An integer
     */
    int backPackIV(vector<int> &nums, int target) {
        // write your code here
        std::vector<int> dp(target + 1);
        dp.front() = 1;
        for (auto const item: nums)
            for (std::size_t size{1}; size != target + 1; ++size) dp.at(size) += size >= item ? dp.at(size - item) : 0;
        return dp.back();
    }
};
