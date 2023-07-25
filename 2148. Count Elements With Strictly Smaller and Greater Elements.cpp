2148. Count Elements With Strictly Smaller and Greater Elements
class Solution {
public:
    int countElements(vector<int>& nums) 
    {

        if(nums.size()==1)
        return 0;
        sort(nums.begin(),nums.end());
        int id=0,id1=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1])
            {
                id=i+1;
                break;
            }
        }
        for(int i=nums.size()-1;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                id1=i;
                break;
            }
        }
    return id1-id;
    }
};
