1502. Can Make Arithmetic Progression From Sequence
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) 
    {
        int a=arr.size();
            if(a==2)
                return true;
            sort(arr.begin(),arr.end());
            int diff=arr[1]-arr[0];
            for(int i=2;i<a;i++)
            {
                if(arr[i]-arr[i-1]!=diff)
                {
                    return false;
                }
            }   
        return true;
    }
};
