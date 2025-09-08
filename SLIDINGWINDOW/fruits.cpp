//fruit into baskets...one basket holds one type fruits...traversal from left to right
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int i = 0;
        int j = 0;
        int maxlen = 0;
        map<int, int> mpp;

        while (j < n) {
            mpp[fruits[j]]++;

            if (mpp.size() > 2) {
                while (mpp.size() > 2) {
                    mpp[fruits[i]]--;
                    if (mpp[fruits[i]] == 0) mpp.erase(fruits[i]);
                    i++;
                }
            }

            if (mpp.size() <= 2) {
                maxlen = max(maxlen, j - i + 1);
            }
            j++;
        }
        return maxlen;
    }
};

int main() {
    Solution sol;
    vector<int> fruits = {1, 2, 1, 2, 3};
    cout << sol.totalFruit(fruits) << endl;  // Expected output: 4
    return 0;
}
