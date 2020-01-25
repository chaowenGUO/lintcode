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
            for (std::size_t size{target}; size > item - 1; --size) dp[size] += dp[size - item];
        return dp.back();
    }
};
