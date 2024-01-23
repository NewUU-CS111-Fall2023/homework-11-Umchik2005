/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include <vector>

class Problem2 {
public:
    bool canPartition(std::vector<int>& nums) {
        int totalSum = 0;

        for (int num : nums) {
            totalSum += num;
        }

        if (totalSum % 2 != 0) {
            return false;
        }

        int targetSum = totalSum / 2;

        std::vector<std::vector<bool>> dp(nums.size() + 1, std::vector<bool>(targetSum + 1, false));

        for (int i = 0; i <= nums.size(); ++i) {
            dp[i][0] = true;
        }

        for (int i = 1; i <= nums.size(); ++i) {
            for (int j = 1; j <= targetSum; ++j) {
                if (nums[i - 1] > j) {
                    dp[i][j] = dp[i - 1][j];
                } else {
                    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
                }
            }
        }

        return dp[nums.size()][targetSum];
    }
};