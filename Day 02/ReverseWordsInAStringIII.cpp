class Solution {
public:
    string reverseWords(string s) {
        s=s+' ';
        int start=-1,i,end;
        for(i=0;i<s.length();i++)
        {
            if(start==-1)
            start=i;
            if(s[i]==' ')
            {
                while(start<end)
                    swap(s[start++],s[end--]);
                start=-1;
            }
            else
                end=i;
        }
        return s.substr(0,s.length()-1);
    }
};