class Solution {
public:
    string solve(string str,int curr,int n)
    {
        if(curr==n)
        return str;
        string ans="";
        for(int i=0;i<str.length();i++)
        {
            char ch=str[i];
            int j=i+1,count=1;
            while(j<str.length()&&str[j]==ch)
            {
                j++;count++;
            }
            ans=ans+to_string(count)+ch;
            i=j-1;
        }
        return solve(ans,curr+1,n);
    }
    string countAndSay(int n) {
        return solve(to_string(1),1,n);
    }
};