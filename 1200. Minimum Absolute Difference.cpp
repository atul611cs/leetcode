1200. Minimum Absolute Difference
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>result;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int diff=INT_MAX;
        for(int i=1;i<n;i++)
        {
            int adiff=arr[i]-arr[i-1];
            if(adiff<diff){
                diff=adiff;
                result.clear();
                result.push_back({arr[i-1],arr[i]});
            }
                else if(adiff==diff){
                    result.push_back({arr[i-1],arr[i]});
                }
        }
        return result;
    }
};
