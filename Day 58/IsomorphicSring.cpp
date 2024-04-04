class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int i;
        map<char,char> mp;
        map<char,bool> mp2;
        if(s.length()!=t.length())
        return 0;
        for(int i=0;i<s.length();i++)
        {
            if(mp.find(s[i])!=mp.end())
            {
                if(mp[s[i]]!=t[i])
                return 0;
            }
            else if(mp2[t[i]])
            return 0;
            else
            {
                mp[s[i]]=t[i];
                mp2[t[i]]=1;
            }
        }
        return 1;
    }
};