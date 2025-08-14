#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to find the union of two sorted arrays
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums2[j] < nums1[i]) {
                if (ans.empty() || ans.back() != nums2[j]) {
                    ans.push_back(nums2[j]);
                }
                j++;
            }
            else if (nums2[j] > nums1[i]) {
                if (ans.empty() || ans.back() != nums1[i]) {
                    ans.push_back(nums1[i]);
                }
                i++;
            }
            else {
                if (ans.empty() || ans.back() != nums1[i]) {
                    ans.push_back(nums1[i]);
                }
                i++;
                j++;
            }
        }

        while (i < nums1.size()) {
            if (ans.empty() || ans.back() != nums1[i]) {
                ans.push_back(nums1[i]);
            }
            i++;
        }

        while (j < nums2.size()) {
            if (ans.empty() || ans.back() != nums2[j]) {
                ans.push_back(nums2[j]);
            }
            j++;
        }

        return ans;
    }

    // Function to find the intersection of two sorted arrays
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                i++;
            }
            else if (nums1[i] > nums2[j]) {
                j++;
            }
            else {
                if (ans.empty() || ans.back() != nums1[i]) {
                    ans.push_back(nums1[i]);
                }
                i++;
                j++;
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {1, 2, 7};

    vector<int> unionResult = sol.unionArray(nums1, nums2);
    vector<int> intersectionResult = sol.intersectionArray(nums1, nums2);

    cout << "Union: ";
    for (int num : unionResult) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Intersection: ";
    for (int num : intersectionResult) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
