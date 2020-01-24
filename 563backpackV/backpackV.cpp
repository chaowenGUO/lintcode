class Solution {
public:
    /**
     * @param nums: an integer array and all positive numbers
     * @param target: An integer
     * @return: An integer
     */
    int backPackV(vector<int> &nums, int target) {
        // write your code here
        std:;vector<int> dp(target + 1);
        dp.front() = 1;
        for (auto const item: nums)
            for (std::size_t size{target}; size != 0; --size) dp[size] += size >= item ? dp[size - item] : 0;;
        return dp.back();
    }
};
