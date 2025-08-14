#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:




    vector<int> selectionSort(vector<int>& nums) {
      
        int n = nums.size();


        for(int i = 0 ; i <=n -2 ; i++ )
        {
            int mini = i  ; 

        for(int j  = i  ; j <= n - 1; j++ )
        {
            if(nums[j] <= nums[mini])
            {
                mini = j;
            }
        }
        swap(nums[mini],nums[i]);
        }
        return nums; 

    }
};

int main() {
    Solution sol;
    vector<int> nums = {7, 4, 1, 5, 3};

    vector<int> sorted = sol.selectionSort(nums);

    cout << "Sorted array: ";
    for (int num : sorted) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
