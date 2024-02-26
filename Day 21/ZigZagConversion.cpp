class Solution {
public:
    string convert(string s, int numRows) {
        string ans="";
        if(numRows==1)
        return s;
        int i,j,start=0,skipfix=(numRows-1)*2,skip;
        for(i=0;i<s.length();)
        {
            skip=skipfix;
            if(skip!=(numRows-1)*2)
                skip=((numRows-1)*2)-skip;
            for(j=start;j<s.length();j+=skip)
            {
                ans+=s[j];
                i++;
                if(skip!=(numRows-1)*2)
                    skip=((numRows-1)*2)-skip;
            }
            skipfix-=2;
            if(skipfix<1)
            skipfix=(numRows-1)*2;
            start++;
        }
        return ans;
    }
};