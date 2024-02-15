class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,int> mp;
        vector<vector<string>> ans;
        for(int i=0;i<strs.size();i++)
        {
            string s=strs[i];
            sort(s.begin(),s.end());
            if(mp.find(s)!=mp.end())
            {
                ans[mp[s]].push_back(strs[i]);
            }
            else
            {
                vector<string> temp={strs[i]};
                ans.push_back(temp);
                mp[s]=ans.size()-1;
            }
        }
        return ans;
    }
};