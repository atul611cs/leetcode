
2535. Difference Between Element Sum and Digit Sum of an Array
class Solution {
public:
    int differenceOfSum(vector<int>& nums) 
    {
        int elementsum=0;
        int digitsum=0;
        int rem=0;
        for(int i=0;i<nums.size();i++)
        {
            elementsum+=nums[i];
        }

    for(int i=0;i<nums.size();i++ )
    {
        while(nums[i]>0)
        {
            rem=nums[i]%10;
            digitsum+=rem;
            nums[i]=nums[i]/10;
        }
    }
   // return digitsum;
   
     return abs(elementsum-digitsum);
        
    }
};
