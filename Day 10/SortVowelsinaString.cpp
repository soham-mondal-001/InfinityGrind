class Solution {
public:
    string sortVowels(string s) {
        vector<int> count(11,0);
        vector<char> vowels={'A','E','I','O','U','a','e','i','o','u'};
        vector<int> index;
        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<vowels.size();j++)
            {
                if(vowels[j]==s[i])
                {
                    index.push_back(i);
                    count[j]++;
                    break;
                }
            }
        }
        int j=0;
        for(int i=0;i<index.size();i++)
        {
            while(count[j]==0)
            j++;
            count[j]--;
            s[index[i]]=vowels[j];
        }
        return s;
    }
};