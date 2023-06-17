1431. Kids With the Greatest Number of Candies
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        int n=candies.size();
        int maxcandies=0;

        for(int i=0;i<n;i++)
        {
            maxcandies=max(maxcandies,candies[i]);
        }
        vector<bool>value(n);
        for(int i=0;i<n;i++)
        {
            if(candies[i]+extraCandies>=maxcandies)
                value[i]= true;
            else 
             value[i]= false;    
        }
        return value;
    }
};
