#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {

        int n = nums. size(); 
        
        for(int i = n-1; i>0 ;i++)
        {
                int didswap = 0 ; 
            for(int j = 0 ; j <= n -2 ; j++)
            {
                if(nums[j]>nums[j+1])
                {
                    swap(nums[j],nums[j+1]);
                    didswap++;
                }
            }
            if(didswap == 0 ){
                break; 
            }
        }

        return nums ;

    }
};
int main() {
    Solution sol;
    vector<int> nums = {7, 4, 1, 5, 3};

    vector<int> sorted = sol.bubbleSort(nums);

    cout << "Sorted array: ";
    for (int num : sorted) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
