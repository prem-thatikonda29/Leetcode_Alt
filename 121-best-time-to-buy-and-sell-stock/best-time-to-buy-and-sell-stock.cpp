class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int price = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] > price){
                profit = max(profit, prices[i] - price);
            }
            else{
                price = prices[i];
            }
        }

        return profit;
    }
};