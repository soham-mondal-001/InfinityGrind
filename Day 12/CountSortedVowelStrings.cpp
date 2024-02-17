class Solution {
private:
    int solve(int lev,int i)
    {
        int sum=0;
        if(lev==0)
        return 1;
        for(int j=i;j<=5;j++)
            sum+=solve(lev-1,j);
        return sum;
    }
public:
    int countVowelStrings(int n) {
        return solve(n,1);
    }
};