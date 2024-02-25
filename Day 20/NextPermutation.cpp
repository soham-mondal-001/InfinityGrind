class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n,i,x;
        n=nums.size();
        for(i=n-2;i>=0;i--)
            if(nums[i]<nums[i+1])
                break;
        x=i;
        for(i=n-1;i>x;i--){
            if(x>=0&&nums[i]>nums[x]){
                swap(nums[i],nums[x]);
                break;
            }
        }
        sort(nums.begin()+x+1,nums.end());
    }
};