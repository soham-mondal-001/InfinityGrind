class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        map<int,int> mp;
        map<vector<int>,bool> mp2;
        int previ=INT32_MIN;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==previ)
            {
                for(int j=i+1;j<nums.size();j++)
                {
                    if(nums[j]==-1*(previ*2))
                    {
                        vector<int> temp={previ,previ,nums[j]};
                        if(!mp2[temp])
                        {
                            ans.push_back(temp);
                            mp2[temp]=1;
                        }
                        
                        break;
                    }
                }
                mp[nums[i]]++;
                while(i+1<nums.size()&&nums[i+1]==previ)
                i++;
                continue;
            }
            bool flag=0;
            int prevj=INT32_MIN;
            for(int j=i+1;j<nums.size();j++)
            {
                if(prevj==nums[j])
                continue;
                if(mp.find(-1*(nums[i]+nums[j]))!=mp.end())
                {
                    vector<int> temp={-1*(nums[i]+nums[j]),nums[i],nums[j]};
                    if(!mp2[temp])
                        {
                            ans.push_back(temp);
                            mp2[temp]=1;
                        }
                    flag=1;
                }
                prevj=nums[j];
            }
            if(flag)
            previ=nums[i];
            mp[nums[i]]++;
        }
        return ans;
    }
};