2733. Neither Minimum nor Maximum
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n<=2)
        {
            return -1;
        }
        else
        return nums[n-2];
    }
};
