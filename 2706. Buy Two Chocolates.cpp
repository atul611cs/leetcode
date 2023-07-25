2706. Buy Two Chocolates
class Solution {
public:
    int buyChoco(vector<int>& prices, int money) 
    {
        sort(prices.begin(),prices.end());
        for(int i=0;i<prices.size();i++)
        {
            if(prices[0]+prices[1]<=money)
            {
                int op=money-(prices[0]+prices[1]);
                return op;
            }
        }
        return money;
    }
};
