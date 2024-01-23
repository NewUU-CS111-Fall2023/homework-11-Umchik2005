/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

class Problem1 {
public:
    int findWaysToEvaluateToTarget(vector<int>& nums, int target) {
        unordered_map<string, int> memo;

        return evaluateExpression(nums, target, 0, 0, memo);
    }

private:
    int evaluateExpression(const vector<int>& nums, int target, int index, int currentSum, unordered_map<string, int>& memo) {
        if (index == nums.size()) {
            return (currentSum == target) ? 1 : 0;
        }

        string key = to_string(index) + "_" + to_string(currentSum);

        if (memo.find(key) != memo.end()) {
            return memo[key];
        }

        int waysWithPlus = evaluateExpression(nums, target, index + 1, currentSum + nums[index], memo);
        int waysWithMinus = evaluateExpression(nums, target, index + 1, currentSum - nums[index], memo);

        memo[key] = waysWithPlus + waysWithMinus;

        return memo[key];
    }
};