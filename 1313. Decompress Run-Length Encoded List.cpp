1313. Decompress Run-Length Encoded List
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) 
    {
        vector<int>r;
        int n= nums.size();
        for(int i=0;i<n;i+=2)
        {
            int freq=nums[i];
            int val=nums[i+1];
            for(int j=0;j<freq;j++)
            {
                r.push_back(val);
            }
        }
        return r;
        
    }
};
