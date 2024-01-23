/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include <vector>

class Problem4 {
public:
    int superPow(int a, std::vector<int>& b) {
        const int mod = 1337;
        a %= mod; 

        int result = 1;

        for (int digit : b) {
            result = (powMod(result, 10) * powMod(a, digit)) % mod;
        }

        return result;
    }

private:
    int powMod(int base, int exponent) {
        const int mod = 1337;
        int result = 1;

        while (exponent > 0) {
            if (exponent % 2 == 1) {
                result = (result * base) % mod;
            }

            base = (base * base) % mod;
            exponent /= 2;
        }

        return result;
    }
};