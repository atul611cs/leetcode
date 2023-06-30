1385. Find the Distance Value Between Two Arrays
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) 
    {
        int count=0;
        int a=arr1.size();
        int b=arr2.size();
        for(int i=0;i<a;i++)
        {
            bool found= false;
            for(int j=0;j<b;j++)
            {
                if(abs(arr1[i]-arr2[j])<=d)
                {
                    found= true;
                    break;
                }
            }
            if(!found)
            {
                count++;
            }
        }
        return count;
    }
};
