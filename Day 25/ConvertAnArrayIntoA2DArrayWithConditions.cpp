class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int> mp;
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        while(1)
        {
            vector<int> temp;
            for (auto it: mp) 
            {
                if(it.second>0)
                temp.push_back(it.first);
                mp[it.first]--;
            }
            if(!temp.empty())
            ans.push_back(temp);
            else
            break;
        }
        return ans;
    }
};