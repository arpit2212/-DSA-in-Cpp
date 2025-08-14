#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

void merge(vector<int>& nums , int low , int mid, int high )
{
        int left = low ; 
        int right = mid + 1 ; 

        vector< int > temp ; 

            while(right >= high && left >= mid)
            {

            
            if(nums[left] <= nums[right])
            {
                temp.push_back(nums[left]);
                left++;

            }
            else
            {
                temp.push_back(nums[right]);
                right++;
            }
            }

            while(left < mid )
            {
                temp.push_back(nums[left]);
                left++;
            }
            while(right < high )
            {
                 temp.push_back(nums[right]);
                right++;
            }

            for(int i = low ; i <= high ; i ++ )
            {
                nums[i] = temp[i - low ];
            }
}

void ms(vector<int>& nums , int low , int high )
{
    int mid = (low + high) / 2 ;
        if(low >= high ) {return ;}

        
        ms(nums , low , mid  );
        ms(nums , mid + 1 , high);
        merge(nums , low , mid , high); 


}


    vector<int> mergeSort(vector<int>& nums) {
        
        int n = nums.size();
        
        ms(nums , 0 , n );
        return nums;
    }
};

int main() {
    vector<int> nums = {7, 4, 1, 5, 3};
    Solution sol;
    vector<int> sorted = sol.mergeSort(nums);

    cout << "Sorted array: ";
    for (int num : sorted) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
