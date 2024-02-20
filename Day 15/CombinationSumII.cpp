class Solution {
public:
    void solve(vector<int>& candidates, int target,int i, vector<int> curr, int sum, vector<vector<int>> & ans)
    {
        if(sum==target)
        {
            ans.push_back(curr);
            return;
        }
        if(i==candidates.size())
            return;
        int last=0;
        for(int j=i;j<candidates.size();j++)
        {
            curr.push_back(candidates[j]);
            sum+=candidates[j];
            if(sum<=target)
            {
                if(last!=candidates[j])
                    solve(candidates,target,j+1,curr,sum,ans);
            }
            else
            break;
            sum-=candidates[j];
            curr.pop_back();
            last=candidates[j];
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        solve(candidates,target,0,{},0,ans);
        return ans;
    }
};