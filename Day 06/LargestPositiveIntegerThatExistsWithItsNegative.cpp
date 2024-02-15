class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int i,ans=-1;
        map<int,bool> mp;
        for(i=0;i<nums.size();i++)
        {
            int n=abs(nums[i]);
            if(mp[nums[i]*(-1)]&&n>ans)
            ans=n;
            mp[nums[i]]=1;
        }
        return ans;
    }
};