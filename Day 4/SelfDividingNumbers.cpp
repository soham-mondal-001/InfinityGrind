class Solution {
public:
    bool check(int n)
    {
        int no=n;
        while(no>0)
        {
            int d=no%10;
            no=no/10;
            if(d==0||n%d!=0)
            return false;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++)
        {
            if(check(i))
            ans.push_back(i);
        }
        return ans;
    }
};