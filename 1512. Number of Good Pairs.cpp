1512. Number of Good Pairs
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        int count=0;
       for(int j=0;j<nums.size();j++)
       {
           for(int i=j+1;i<nums.size();i++)
           {
               if(nums[i]==nums[j])
                count++;
           }
       } 
       return count;
    }
};
