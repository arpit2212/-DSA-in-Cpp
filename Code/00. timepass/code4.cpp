#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> H(N + 1); // heights (1-indexed)
    for (int i = 1; i <= N; ++i) {
        cin >> H[i];
    }

    vector<int> successfulBalls; // to store 1-based query numbers

    for (int i = 1; i <= M; ++i) {
        int A, B;
        cin >> A >> B;

        if (A > B) swap(A, B); // ensure A < B

        int maxHill = 0;
        for (int j = A + 1; j < B; ++j) {
            maxHill = max(maxHill, H[j]);
        }

        if (H[A] >= maxHill && H[A] >= H[B]) {
            successfulBalls.push_back(i);
        }
    }

    // Output the count
    cout << successfulBalls.size() << endl;

    // Output the indices
    cout << "Bob can catapult ball number ";
    for (int i = 0; i < successfulBalls.size(); ++i) {
        cout << successfulBalls[i];
        if (i != successfulBalls.size() - 1) cout << " and ";
    }
    cout << endl;

    return 0;
}
