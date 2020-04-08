class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,max=0,profit=0;
        for(i=1;i<prices.size();i++)
        {
            if(prices[i]>prices[i-1])
            {
                profit=prices[i]-prices[i-1];
                max=max+profit;
                }
        }
        return max;
    }
};