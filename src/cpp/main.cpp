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
#include "task_7.cpp"
#include "task_8.cpp"

using namespace std;

int main() {
    vector<int> nums = {1, 1, 1, 1, 1};
    int target = 3;

    Problem1 problem1;
    int result = problem1.findWaysToEvaluateToTarget(nums, target);

    cout << "Number of ways: " << result << endl;
    cout << "//////////////////////////////////////" << endl;

    vector<int> nums2 = {1, 5, 11, 5};

    Problem2 problem2;
    bool result2 = problem2.canPartition(nums);

    cout << (result2 ? "True" : "False") << endl;

    cout << "//////////////////////////////////////" << endl;

    string s = "newuzbekistan";
    vector<string> wordDict = {"new", "uzbekistan"};

    Problem3 problem3;
    bool result3 = problem3.wordBreak(s, wordDict);

    cout << (result3 ? "True" : "False") << endl;

    cout << "//////////////////////////////////////" << endl;

    Problem4 problem4;
    int a4 = 2;
    vector<int> b = {1, 0};

    int result4 = problem4.superPow(a4, b);

    cout << "Result: " << result4 << endl;

    cout << "//////////////////////////////////////" << endl;

    Problem5 problem5;
    string key5 = "the quick brown fox jumps over the lazy dog.";
    string message5 = "vkbs bs t suepuv";

    string decodedMessage5 = problem5.decodeMessage(key5, message5);

    cout << decodedMessage5 << endl;

    cout << "//////////////////////////////////////" << endl;

    Problem6 problem6;

    int n;
    std::cout << "Enter a number (n): ";
    std::cin >> n;

    int prime1 = 5; 
    int prime2 = 7;
    problem6.generatePrimesGreaterThanN(n, prime1, prime2);

    cout << "Two prime numbers greater than " << n << " are: " << prime1 << " and " << prime2 << std::endl;

    cout << "//////////////////////////////////////" << endl;

    Problem7 problem7;

    int a7,b7;
    cin>>a7>>b7;
    cout<<problem7.Euler(a7,b7);

    cout << "//////////////////////////////////////" << endl;

    Problem8 problem8;
    int p8, q8;

    cout << "Enter the first prime number (p): ";
    cin >> p8;

    cout << "Enter the second prime number (q): ";
    cin >> q8;

    if (p8 <= 1 || q8 <= 1) {
        cerr << "Please enter valid prime numbers greater than 1." << endl;
        return 1;
    }

    int n8 = p8 * q8;
    int phi_n = problem8.eulerTotientFunction(p8, q8);

    int e8;
    for (e8 = 2; e8 < phi_n; ++e8) {
        if (problem8.areCoprime(e8, phi_n)) {
            break;
        }
    }

    int d8 = problem8.modInverse(e8, phi_n);

    cout << "Public key (e, n): (" << e8 << ", " << n8 << ")" << endl;
    cout << "Private key (d, n): (" << d8 << ", " << n8 << ")" << endl;

    return 0;
    
}
