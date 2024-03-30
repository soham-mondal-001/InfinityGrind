class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sum=0,leftsum,rightsum;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        leftsum=0;rightsum=sum;
        for(int i=0;i<nums.size();i++)
        {
            rightsum-=nums[i];
            ans.push_back(abs(leftsum-rightsum));
            leftsum+=nums[i];
        }
        return ans;
    }
};