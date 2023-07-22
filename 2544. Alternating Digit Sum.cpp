2544. Alternating Digit Sum
class Solution {
public:
    int alternateDigitSum(int n) 
    {
        vector<int>result;
        int sum=0;
        while(n>0)
        {
        result.push_back(n%10);
        n/=10;
        }
        reverse(result.begin(),result.end());
        for(int i=0;i<result.size();i++)
        {
        if(i%2==0)
        {
            sum+=result[i];
        }
        else
            sum-=result[i];
        }
        return sum;    
    }
};
