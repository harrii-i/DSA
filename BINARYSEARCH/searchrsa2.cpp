#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] == target) {
                return true;
            }

            if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
                // ambiguous due to duplicates
                low++;
                high--;
            }   
            else if (nums[low] <= nums[mid]) {
                // left half sorted
                if (nums[low] <= target && target < nums[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else {
                // right half sorted
                if (nums[mid] < target && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }

        return false;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2,5,6,0,0,1,2};
    int target = 0;

    if (sol.search(nums, target)) {
        cout << "Target " << target << " is found in the array." << endl;
    } else {
        cout << "Target " << target << " is NOT found in the array." << endl;
    }

    return 0;
}
