class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int profit = 0;
if (prices.size() <= 1) return profit;
for (int i = 1; i < prices.size(); i++) {
if (prices[i-1] < prices[i])
profit += prices[i] - prices[i-1];
}
return profit;
}
};