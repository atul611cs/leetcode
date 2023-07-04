1816. Truncate Sentence
class Solution {
public:
    string truncateSentence(string s, int k) {
    string new1="";
    int n=0;
    for(int i=0;i<s.length();i++)
    {
        
        if(s[i]==' ')
        {
            n++;
        }
        if(n==k)
        break;
        new1+=s[i];
    }
    return new1;
    }
};
