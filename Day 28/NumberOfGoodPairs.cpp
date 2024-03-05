class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans=0,i;
        map<int,int> mp;
        for(i=0;i<nums.size();i++)
            mp[nums[i]]++;
        for(auto it:mp)
            ans+=(it.second*(it.second-1))/2;
        return ans;
    }
};