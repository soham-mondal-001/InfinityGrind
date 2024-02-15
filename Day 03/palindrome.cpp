class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        int n=x;
        while(n>0)
        {
            rev=rev*10+(n%10);
            n=n/10;
        }
        if(rev==x)
        return true;
        else 
        return false;
    }
};