#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    int swapingqs(vector<int>& nums,int low, int high)
    {

        int pivot = nums[low];
        int i = low + 1; 
        int j = high;
        
        
        while (i <= j )
        {
            while(nums[i] <= pivot && i <= high ) { i++; }
            while( nums[j] > pivot && j >= low) { j--; }
            if(i < j ) { swap(nums[i],nums[j]); }
        }

        swap(nums[j],nums[low]) ; 

        return j ; 

    }

    void qs(vector<int>& nums,int low, int high)
    {
        if(low < high)
        {
            

        int pindex = swapingqs(nums, low , high);
                    qs(nums,low,pindex - 1);
                    qs(nums, pindex + 1,high);
        }

    }

     vector<int> quickSort(vector<int>& nums) {
      
        

        qs(nums,0, nums.size()-1) ;
       
        return nums;
     }
};

// Sample usage
int main() {
    Solution sol;
    vector<int> nums = {7, 4, 1, 5, 3};
    vector<int> sorted = sol.quickSort(nums);

    cout << "Sorted array: ";
    for (int num : sorted) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
