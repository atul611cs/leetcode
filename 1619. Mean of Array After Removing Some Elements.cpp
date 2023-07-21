1619. Mean of Array After Removing Some Elements
class Solution {
public:
    double trimMean(vector<int>& arr) {
        double ans=0;
        int m=arr.size()*(0.05);
        sort(arr.begin(),arr.end());
        double sum=0;
        for(int i=m;i<arr.size()-m;i++)
        sum+=arr[i];
        
        double d=arr.size()-2*m;

        ans=sum/d;

        return ans;

    }
};
