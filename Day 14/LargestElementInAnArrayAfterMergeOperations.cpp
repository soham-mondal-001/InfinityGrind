class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        long long ans=0,sum=0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(sum>=nums[i])
            {
                sum=sum+nums[i];
            }
            else
            {
                sum=nums[i];
            }
            if(sum>ans)
            ans=sum;
        }
        return ans;
    }
};