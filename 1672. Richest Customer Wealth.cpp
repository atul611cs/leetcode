1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int ans=0,sum=0;
        int m=accounts.size(),n=accounts[0].size();
        for(int i=0;i<m;i++)
        {    sum=0;
            for(int j=0;j<n;j++)
            {
               sum+=accounts[i][j];
            }
            ans=max(sum,ans); 
        }
        return ans;
    }
};
