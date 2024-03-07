class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j;
        for(i=0,j=0;j<nums.size();i++)
        {
            int s=j,e=nums.size()-1,lastindex=-1;
            while(s<=e)
            {
                int mid=s+(e-s)/2;
                if(nums[mid]==nums[j])
                {
                    lastindex=mid;
                    s=mid+1;
                }
                else
                e=mid-1;
            }
            swap(nums[i],nums[j]);
            j=lastindex+1;
        }
        return i;
    }
};