1480. Running Sum of 1d Array
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        vector<int>r;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
           sum=sum+nums[i];
           r.push_back(sum); 
            
        }
        return r;
        
        
    }
};
