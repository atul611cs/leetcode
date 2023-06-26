2011. Final Value of Variable After Performing Operations
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) 
    {
        int result =0;
        for (const string & operations :operations)
        {
            if(operations=="++X" || operations=="X++"){
                result++;
                }
             else if(operations=="--X" ||operations=="X--"){
                 result--;
             }
        }
        return result;
        
        
    }
};
