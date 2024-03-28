class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int sum1=0,sum2=0,i,rep;
        vector<int> ans;
        map<int,int> mp;
        for(i=1;i<=nums.size();i++)
        {
            sum1+=i;
            sum2+=nums[i-1];
            if(mp[nums[i-1]]==1)
            rep=nums[i-1];
            else
            mp[nums[i-1]]=1;
        }
        ans.push_back(rep);
        ans.push_back(sum1-sum2+rep);
        return ans;
    }
};