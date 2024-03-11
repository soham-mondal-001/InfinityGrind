class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int> mp;
        string firsthalf="",secondhalf="";
        for(int i=0;i<order.length();i++)
            mp[order[i]]=i;
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(mp.find(ch)!=mp.end())
            {
                int j=firsthalf.length()-1;
                while(j>=0&&mp[ch]<mp[firsthalf[j]])
                j--;
                firsthalf=firsthalf.substr(0,j+1)+ch+firsthalf.substr(j+1);
            }
            else
                secondhalf+=ch;
        }
        return firsthalf+secondhalf;
    }
};