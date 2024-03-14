class Solution {
public:
    int solve(vector<int>& nums, int i,int curr)
    {
        if(i==nums.size())
        return curr;
        return solve(nums,i+1,curr)+solve(nums,i+1,curr^nums[i]);
    }
    int subsetXORSum(vector<int>& nums) {
        return solve(nums,0,0);
    }
};