class Solution {
private:
    char oneless(char ch)
    {
        if(ch=='a')
        return 'z';
        else
        return (ch-1);
    }
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i,j;
        for(i=0,j=0;j<str2.length()&&i<str1.length();i++)
        {
            if(str1[i]==str2[j]||str1[i]==oneless(str2[j]))
                j++;
        }
        return j==str2.length();
    }
};