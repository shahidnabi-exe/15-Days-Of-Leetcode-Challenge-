class Solution {
public:
    int maxProfit(vector<int>& p) {
        int profit = 0;
        int cost;
        int buy = p[0] ;

        for (int i = 1; i < p.size(); i++)
        {
           cost = p[i] - buy;
           profit = max(profit, cost);
           buy = min(buy, p[i]);
        }
        return profit;  
    }
};