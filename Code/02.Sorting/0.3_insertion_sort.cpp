#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
      
        int n = nums.size(); 

        for(int i = 0 ; i < n -1 ; i ++ )
        {
            int j = i ; 

            while( j>=0 && nums[j+1] < nums[j])
            {
                swap(nums[j+1],nums[j]);

                j--;
            }
        }

        return nums;
    }
};

int main() {
    vector<int> nums = {7, 4, 1, 5, 3};
    Solution sol;
    vector<int> sorted = sol.insertionSort(nums);

    cout << "Sorted array: ";
    for (int num : sorted) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
