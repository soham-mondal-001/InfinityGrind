class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        map<int,int> trustedby;
        map<int,int> trusts;
        for(int i=0;i<trust.size();i++)
        {
            trusts[trust[i][0]]++;
            trustedby[trust[i][1]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(trustedby[i]==n-1&&trusts[i]==0)
            return i;
        }
        return -1;
    }
};