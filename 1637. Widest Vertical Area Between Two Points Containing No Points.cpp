1637. Widest Vertical Area Between Two Points Containing No Points
class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) 
    {
        sort(points.begin(),points.end());
        int max1=INT_MIN;

        for(int i=0;i<points.size()-1;i++)
        {
            max1=max(max1,points[i+1][0]-points[i][0]);
        }
        return max1;
    }
};
