class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int cal=0;
        for(int i=0;i<nums.size();i++)
            cal=cal^nums[i];    
        return cal;
    }
};