class Solution {
public:
    int countDigits(int num) 
    {
        int n=num,count=0,rem;
        while(n>0)
        {
            rem=n%10;
            if(num%rem==0)
            count++;
            n/=10;
        }
        return count;
        
    }
};
