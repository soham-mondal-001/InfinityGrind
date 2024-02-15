class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> freq;
        vector<int> arr;
        for(int i=0;i<nums.size();i++)
            freq[nums[i]]++;
        for(auto it:freq)
            arr.push_back(it.first);
        for(int i=1;i<arr.size();i++)
        {
            int num=arr[i];
            int x=freq[arr[i]];
            int j=i-1;
            while((j>=0&&x<freq[arr[j]])||(j>=0&&x==freq[arr[j]]&&num>arr[j]))
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=num;
        }
        for(int i=0,k=0;i<arr.size();i++)
            for(int j=0;j<freq[arr[i]];j++)
                nums[k++]=arr[i];
        return nums;
    }
};