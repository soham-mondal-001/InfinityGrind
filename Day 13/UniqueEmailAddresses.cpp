class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int i,j,ans=0;
        unordered_map<string,bool> mp;
        for(i=0;i<emails.size();i++)
        {
            string s="";
            bool flag=0;
            string str=emails[i];
            for(j=0;j<str.length();j++)
            {
                if(flag)
                    s+=str[j];
                else
                {
                    if(str[j]=='.')
                        continue;
                    else if(str[j]=='+')
                    {
                        while(str[j]!='@')
                        j++;
                        flag=1;
                    }
                    else if(str[j]=='@')
                        flag=1;
                    s+=str[j];
                }
            }
            mp[s]==1;
        }
        for(auto it: mp)
            ans++;
        return ans;
    }
};