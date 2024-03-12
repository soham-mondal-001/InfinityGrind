class Solution {
public:
    string finalString(string str) {
        int i;
        string ans="";
        for(i=0;i<str.length();i++)
        {
            if(str[i]=='i')
            {
                int s=0,e=ans.length()-1;
                while(s<e)
                    swap(ans[s++],ans[e--]);
            }
            else
                ans+=str[i];
        }
        return ans;
    }
};