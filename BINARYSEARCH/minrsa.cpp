#include <iostream>
#include <vector>
#include <climits> // for INT_MAX
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int ans = INT_MAX;

        while (low <= high) {
            int mid = (low + high) / 2;

            // If left part is sorted
            if (nums[low] <= nums[mid]) {
                ans = min(ans, nums[low]);
                low = mid + 1;
            }
            // Right part is sorted
            else {
                ans = min(ans, nums[mid]);
                high = mid - 1;
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4,5,6,7,0,1,2};
    cout << "Minimum element: " << sol.findMin(nums) << endl;

    return 0;
}
