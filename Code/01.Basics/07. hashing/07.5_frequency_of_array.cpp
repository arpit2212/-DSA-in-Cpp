#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        map<int, int> freq;

        // Count frequency of each number
        for (int num : nums) {
            freq[num]++;
        }

        vector<vector<int>> result;

        // Convert map to vector of pairs
        for (auto it : freq) {
            result.push_back({it.first, it.second});
        }

        return result;
    }
};

int main() {
    // Input array
    vector<int> nums = {1, 2, 2, 1, 3};

    // Create Solution object
    Solution sol;

    // Call the function
    vector<vector<int>> output = sol.countFrequencies(nums);

    // Print the result
    cout << "Output: [";
    for (size_t i = 0; i < output.size(); ++i) {
        cout << "[" << output[i][0] << ", " << output[i][1] << "]";
        if (i != output.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
