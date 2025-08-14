#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_set>

using namespace std;

// Sieve to find all prime numbers up to 10^6
vector<bool> generatePrimes(int limit) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= limit; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}

int main() {
    int n;
    cin >> n;

    vector<long long> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int maxLimit = 1e6;
    vector<bool> isPrime = generatePrimes(maxLimit);
    unordered_set<long long> tPrimes;

    // Store all T-primes: squares of prime numbers
    for (int i = 2; i <= maxLimit; ++i) {
        if (isPrime[i]) {
            tPrimes.insert(1LL * i * i);
        }
    }

    for (long long x : nums) {
        if (tPrimes.count(x)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
