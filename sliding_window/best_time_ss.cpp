#include<iostream>
#include<vector>

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int min = INT_MAX;
        int overall_profit = 0; 
        int pist = 0; // profit if sold today

        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < min) {
                min = prices[i];
            }
            pist = prices[i] - min;
            if (pist > overall_profit) {
                overall_profit = pist;
            }
        }
        return overall_profit;
    }
};

int main() {
    Solution *sol = new Solution();
    std::vector<int> v{7,1,5,3,6,4};

    int res = sol->maxProfit(v);
    std::cout << res << std::endl;
    return 0;
}