class Solution {
public:
    int pivotInteger(int n) {
        int sum1=0,sum2=0,i,x;
        for(i=1;i<=n;i++)
        sum2+=i;
        for(int x=1;x<=n;x++)
        {
            sum1+=x;
            if(sum1==sum2)
            return x;
            sum2-=x;
        }
        return -1;
    }
};