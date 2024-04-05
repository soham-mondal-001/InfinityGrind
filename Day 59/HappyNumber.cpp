class Solution {
public:
    bool isHappy(int n) {
        map<int,bool> mp;
        while(n>9/n&&mp[n]==0)
        {
            mp[n]=1;
            int sum=0;
            while(n>0)
            {
                int d=n%10;
                n=n/10;
                sum+=d*d;
            }
            n=sum;
        }
        return n==1;
    }
};