2651. Calculate Delayed Arrival Time
class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int sum=arrivalTime+delayedTime;
        if(sum==24){
            return 0;   
        }
        else if(sum>24)
        return sum%24;
        return sum;
            
    }
};
