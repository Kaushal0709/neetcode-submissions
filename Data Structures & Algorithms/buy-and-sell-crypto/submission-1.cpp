class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int len = prices.size();
        int l=0;int r = 1;
        while(r<len){
            if(prices[r]>prices[l]){
                profit = max(profit,prices[r]-prices[l]);
            }
            else{
                l=r;
            }
            r++;
        }

        return profit;
    }
};
