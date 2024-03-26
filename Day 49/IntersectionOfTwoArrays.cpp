class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       map<int,int> mp1;
       map<int,int> mp2;
       vector<int> ans;
       int i;
       for(i=0;i<nums1.size();i++)
           mp1[nums1[i]]++;
       for(i=0;i<nums2.size();i++)
           mp2[nums2[i]]++;
       for(auto it: mp1)
       {
           if(mp2[it.first]>0)
           ans.push_back(it.first);
       }
       return ans;
    }
};