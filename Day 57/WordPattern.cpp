class Solution {
public:
    bool wordPattern(string pattern, string s) {
        s=s+" ";int j=0;
        map<char,string> mp;
        map<string,bool> mp2;
        for(int i=0;i<pattern.length();i++,j++)
        {
            string wrd="";
            while(j<s.length()&&s[j]!=' ')
            wrd=wrd+s[j++];
            if(j==s.length())
            return 0;
            if(mp.find(pattern[i])!=mp.end())
            {
                if(mp[pattern[i]]!=wrd)
                return false;
            }
            else if(mp2[wrd])
                return 0;
            else
            {
                mp[pattern[i]]=wrd;
                mp2[wrd]=1;
            }
        }
        return j==s.length();
    }
};