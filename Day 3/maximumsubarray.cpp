class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long i,maxi=LONG_MIN,sum=0;
        for(i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            maxi=max(sum,maxi);
            if(sum<0)
            sum=0;
        }
        return maxi;
    }
};