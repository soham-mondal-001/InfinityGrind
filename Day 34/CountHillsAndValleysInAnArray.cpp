class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int indicator=0;
        if(nums[1]>nums[0])
        indicator=1;
        else if(nums[1]<nums[0])
        indicator=-1;
        int ans=0,i;
        for(i=2;i<nums.size();i++)
        {
            if(indicator==0)
            {
                if(nums[i]>nums[i-1])
                indicator=1;
                else if(nums[i]<nums[i-1])
                indicator=-1;
            }
            else if(indicator==1&&nums[i]<nums[i-1])
            {
                indicator=-1;
                ans++;
            }
            else if(indicator==-1&&nums[i]>nums[i-1])
            {
                indicator=1;
                ans++;
            }
        }
        return ans;
    }
};