1929. Concatenation of Array
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        int n=nums.size();
        nums.insert(nums.end(),nums.begin(),nums.end());

        vector<int>ans;

        for(int i =0;i<2*n;i++)
        {
            ans.push_back(nums[i]);


        }
        return ans;
        
        
    }
};
