#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int> &nums, int k) {
      int left = 0 ; 
      int right = 0 ; 
      int n = nums.size();
      long long sum = 0;
      int max_len = 0 ; 
   
        while(right < n )
        {
             sum += nums[right];

            while(left <= right && sum > k )
            {
                sum -= nums[left];
                left++;
            }

            if(sum == k )
            {
                max_len = max(max_len,right-left+1);
            }
           
               
           right++;
        }


        return max_len;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;

    int result = sol.longestSubarray(nums, k);
    cout << result << endl;

    return 0;
}
