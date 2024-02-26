class Solution {
public:
    int solve(int n,map<int,int>& mp)
    {
        if(n==2)
        return 2;
        if(n==1)
        return 1;
        if(mp.find(n)!=mp.end())
            return mp[n];
        else
        {
            int x= solve(n-1,mp)+solve(n-2,mp);
            mp[n]=x;
            return x;
        }
    }
    int climbStairs(int n) {
        map<int,int> mp;
        return solve(n,mp);
    }
};