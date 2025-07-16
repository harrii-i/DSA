#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int prefix = 1;
        int suffix = 1;
        int maxi = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (prefix == 0) prefix = 1;
            if (suffix == 0) suffix = 1;

            prefix *= nums[i];
            suffix *= nums[n - i - 1];

            maxi = max(maxi, max(prefix, suffix));
        }

        return maxi;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {2,3,-2,4};
    cout << "Maximum product subarray: " << sol.maxProduct(nums) << endl;

    vector<int> nums2 = {-2,0,-1};
    cout << "Maximum product subarray: " << sol.maxProduct(nums2) << endl;

    vector<int> nums3 = {-2,3,-4};
    cout << "Maximum product subarray: " << sol.maxProduct(nums3) << endl;

    return 0;
}
