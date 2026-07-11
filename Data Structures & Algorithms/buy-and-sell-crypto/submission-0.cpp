class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int len = prices.size();
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                if(prices[j]-prices[i]>0){
                    profit = max(profit,prices[j]-prices[i]);
                }
            }
        }
        return profit;
    }
};
