495. Teemo Attacking
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) 
    {
        int n=timeSeries.size();
        if(n==0)
        {
            return 0;
        }
        int time=0;
        for(int i=0;i<n-1;i++)
        {
            int diff=timeSeries[i+1]-timeSeries[i];
            time+=min(diff,duration);
        }
        time+=duration;
        return time;
    }
};
