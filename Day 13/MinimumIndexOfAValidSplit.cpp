class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int,int> mp;
        int i,count=0,maxfreq=0,dom=-1;
        for(i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto it: mp)
        {
            if(it.second>maxfreq)
            {
                maxfreq=it.second;
                dom=it.first;
            }
        }
        for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==dom)
            count++;
            if(count*2>i+1&&(maxfreq-count)*2>nums.size()-i-1)
            return i;
        }
        return -1;
    }
};