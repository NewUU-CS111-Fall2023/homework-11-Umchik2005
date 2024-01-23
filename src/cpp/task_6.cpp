/*
 * Author:
 * Date:
 * Name:
 */
#include <iostream>
#include <cmath>


class Problem6 {
public:
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

void generatePrimesGreaterThanN(int n, int& prime1, int& prime2) {
    int current = n + 1;

    while (!isPrime(current)) {
        ++current;
    }
    prime1 = current;

    do {
        ++current;
    } while (!isPrime(current));
    prime2 = current;
}
};