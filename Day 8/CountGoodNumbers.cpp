class Solution {
public:
    long long fastexp(long long n,long long i)
    {
        long long mod=1000000007;
        if(i==1)
        return n;
        if(i==0)
        return 1;
        long long x=fastexp(n,i/2);
        if(i%2==0)
            return (x*x)%mod;
        else
            return (((x*x)%mod)*n)%mod;
    }
    int countGoodNumbers(long long n) {
        long long mod=1000000007,i,ans=1;
        ans=fastexp(20,n/2);
        if(n%2==1)
        ans=(ans*5)%mod;
        return ans;
    }
};