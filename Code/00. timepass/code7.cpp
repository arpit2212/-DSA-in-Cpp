#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double rate, principal;
    cin >> rate >> principal;

    double r = rate / 100.0;

    // First deposit on Jan 1 → compounded twice
    double amount1 = principal * pow(1 + r, 2);

    // Second deposit on July 1 → compounded once
    double amount2 = principal * (1 + r);

    double total = amount1 + amount2;

    cout << round(total) << endl;

    return 0;
}
