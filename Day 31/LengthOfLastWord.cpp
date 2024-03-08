class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0,n=s.length();
        for(int i=n-1;i>=0;i--)
        {
            if(s.at(i)==' '&&count>0)
            break;
            else if(s.at(i)!=' ')
            count++;
        }
        return count;
    }
};