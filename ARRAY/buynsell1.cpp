#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int profit = 0;

        for(int i = 1; i < prices.size(); i++) {
            int cost = prices[i] - mini; // profit if we sell today
            profit = max(profit, cost);  // update max profit
            mini = min(mini, prices[i]); // update min price seen so far
        }

        return profit; // profit is 0 if no profit is possible
    }
};

int main() {
    Solution sol;
    vector<int> prices = {7, 1, 5, 3, 6, 4};  // sample input
    cout << "Maximum Profit: " << sol.maxProfit(prices) << endl;
    return 0;
}
