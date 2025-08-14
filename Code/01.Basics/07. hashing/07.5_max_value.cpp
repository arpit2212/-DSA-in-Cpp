#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
     unordered_map<int,int> mpp;

        for (auto it : nums)
        {
            mpp[it]++ ; 

        }

        int max_element = 0 ;
        int max_freq = 0 ;

       
         for (auto it : mpp)
        {
             if(it.second >= max_freq )
             {
                max_element = it.first ; 
                max_freq = it.second ; 
             }
           

        }
        
       

        return max_element ; 
    }
    int mostLeastElement(vector<int>& nums) {
     unordered_map<int,int> mpp;

        for (auto it : nums)
        {
            mpp[it]++ ; 

        }

        int min_element = 0 ;
        int min_freq = 1 ;

        
         for (auto it : mpp)
        {
             if(it.second <= min_freq)
             {
                min_element = it.first ; 
                min_freq = it.second ; 
             }
           

        }
        
       

        return min_element ; 
    }
};

int main() {
    vector<int> arr = {4, 4, 5, 5, 6};
    

    Solution sol;
    int ans = sol.mostFrequentElement(arr);
    int ans2 = sol.mostLeastElement(arr);

    cout << "Most frequent element: " << ans << endl;
    cout << "Most least element: " << ans2 << endl;

    return 0;
}
