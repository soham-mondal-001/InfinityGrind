class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int> ans;
        int i,j;
        sort(nums.begin(),nums.end());
        for(i=0;i<queries.size();i++)
        {
            int max=queries[i],sum=0;
            for(j=0;j<nums.size()&&sum+nums[j]<=max;j++)
                sum+=nums[j];
            ans.push_back(j);
        }
        return ans;
    }
};