#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {

        int maxi = nums[0];
        int size = nums.size();

        for(int i = 0 ; i < size ; i++)
        {
            if(maxi <= nums[i])
            {
                maxi = nums[i];
            }
        }
        
        return maxi ; 

    }
};

int main() {
    vector<int> nums = {3, 3, 6, 1};
    Solution sol;
    int result = sol.largestElement(nums);
    cout << "The largest element in the array is " << result << endl;
    return 0;
}
