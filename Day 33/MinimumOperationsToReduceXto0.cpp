class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        map<int,int> mp={{0,0}};
        int ans=INT32_MAX,i,sum=0;
        for(i=nums.size()-1;i>=0&&sum+nums[i]<=x;i--)
        {
            sum+=nums[i];
            mp[sum]=nums.size()-i;
        }
        sum=0;
        for(i=0;i<nums.size()&&sum<=x;i++)
        {
            if(mp.find(x-sum)!=mp.end()&&mp[x-sum]+i<=nums.size())
            {
                int operations=mp[x-sum]+i;
                if(operations<ans)
                ans=operations;
            }
            sum+=nums[i];
        }
        if(ans==INT32_MAX)
        return -1;
        return ans;
    }
};