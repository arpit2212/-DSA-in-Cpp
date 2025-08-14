#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        
        int n = nums.size();
        int maxi = nums[0]; 
        int second_maxi = -1 ; 


        for(int i = 1 ; i < n ; i ++)
        {

            
            if(nums[i] > maxi)
            {
             
                second_maxi = maxi;
        
                maxi = nums[i];
            }

            else if(nums[i] > second_maxi && nums[i] < maxi)
            {
                second_maxi = nums[i];
            }

        }
        return second_maxi;
    }
};

int main() {
    vector<int> nums = {8, 8, 7, 6, 5};
    Solution sol;
    int result = sol.secondLargestElement(nums);
    cout << "The second largest element in the array is " << result << endl;
    return 0;
}
