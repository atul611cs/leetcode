2574. Left and Right Sum Differences
class Solution {
public:
    vector<int>leftRightDifference(vector<int>& nums) 
    {
        vector<int>l;
        vector<int>r;
        vector<int>ans;
        l.push_back(0);
        int lsum=0,rsum=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            lsum+=nums[i];
            l.push_back(lsum);
        }
     r.push_back(0);
     for(int j=nums.size()-1;j>0;j--)
     {
         rsum+=nums[j];
         r.push_back(rsum);
     }
     reverse(r.begin(),r.end());
     for(int i=0;i<nums.size();i++)
     {  
         int x=abs(l[i]-r[i]);
         ans.push_back(x);
     }


     return ans;

        
        
    }
};
