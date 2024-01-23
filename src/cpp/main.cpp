/*
 USE THIS FILE FOR YOUR TESTS,
 AUTOGRADER WILL NOT EXECUTE THIS FILE.
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include "task_1.cpp"
#include "task_2.cpp"
#include "task_3.cpp"
#include "task_4.cpp"
#include "task_5.cpp"
#include "task_6.cpp"

using namespace std;

int main() {
    vector<int> nums = {1, 1, 1, 1, 1};
    int target = 3;

    Problem1 problem1;
    int result = problem1.findWaysToEvaluateToTarget(nums, target);

    cout << "Number of ways: " << result << endl;

    return 0;
}
