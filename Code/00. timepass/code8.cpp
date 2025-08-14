#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> floors(n);          // Number of stores in each floor
    vector<int> prefixSum(n + 1);   // Prefix sum to get cumulative store counts

    for (int i = 0; i < n; ++i) {
        cin >> floors[i];
        prefixSum[i + 1] = prefixSum[i] + floors[i]; // Compute prefix sum
    }

    vector<int> products(m); // Store numbers for each product
    for (int i = 0; i < m; ++i) {
        cin >> products[i];
    }

    // For each product, find the floor and the store in that floor
    for (int i = 0; i < m; ++i) {
        int storeNumber = products[i];
        int floor = 0;

        // Binary search to find the floor
        int low = 1, high = n;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (prefixSum[mid] < storeNumber) {
                low = mid + 1;
            } else {
                floor = mid;
                high = mid - 1;
            }
        }

        // Find store number in the floor
        int storeInFloor = storeNumber - prefixSum[floor - 1];
        cout << floor << " " << storeInFloor << endl;
    }

    return 0;
}
