class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int i,x=0;
        while(1)
        {
            for(i=0;i<strs.size();i++)
            {
                if(x>=strs[i].length()||(i>0&&strs[i-1][x]!=strs[i][x]))
                break;
            }
            if(i!=strs.size())
            return ans;
            ans=ans+strs[0][x];
            x++;
        }
    }
};