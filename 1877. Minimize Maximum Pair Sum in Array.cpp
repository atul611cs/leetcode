1877. Minimize Maximum Pair Sum in Array
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=INT_MIN;
        for(int i=0;i<n/2;i++)
        {
            int add=nums[i]+nums[n-i-1];
            sum=max(sum,add);
        }
        return sum;
    }
};
