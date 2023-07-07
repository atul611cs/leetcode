414. Third Maximum Number
class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end(),greater<int>());
        int count=1;
        for(int i=1;i<n;i++)
        {
            
            if(nums[i]!=nums[i-1])
            {
                count++;
            }
            if(count==3)
            {
                return nums[i];
            }
        }
        return nums[0];
    }
};
