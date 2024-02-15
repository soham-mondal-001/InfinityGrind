class Solution {
private:
    bool Palindrome(string str)
    {
        int s=0,e=str.length()-1;
        while(s<e)
        {
            if(str[s++]!=str[e--])
            return false;
        }
        return true;
    }
public:
    bool validPalindrome(string str) {
        int s=0,e=str.length()-1;
        bool flag=0;
        while(s<e)
        {
            if(str[s]!=str[e])
            {
                if(flag)
                return false;
                else
                {
                    flag=1;
                    if(Palindrome(str.substr(s+1,e-s)))
                        s=s+1;
                    else if(Palindrome(str.substr(s,e-s)))
                        e=e-1;
                    else
                        return false;
                }
            }
            s++;
            e--;
        }
        return true;
    }
};