class Solution {
public:
    bool isUgly(int n) {
        if(n<=0)
        return 0;
        while(n%2==0)
        n=n/2;
        cout<<n<<endl;
        while(n%3==0)
        n=n/3;
        cout<<n<<endl;
        while(n%5==0)
        n=n/5;
        cout<<n<<endl;
        return n<=5;
    }
};