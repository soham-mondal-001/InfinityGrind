class Solution {
public:
    int countscore(vector<int>& arr)
    {
        int prev1=0,prev2=0,sum=0,i;
        cout<<i<<endl;
        for(i=0;i<arr.size();i++)
        {
            if(prev1==10||prev2==10)
            sum+=(arr[i]*2);
            else
            sum+=arr[i];
            cout<<"sum="<<sum<<endl;
            prev1=prev2;
            prev2=arr[i];
        }
        return sum;
    }
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int a=countscore(player1);
        int b=countscore(player2);
        if(a>b)
        return 1;
        else if(b>a)
        return 2;
        else
        return 0;
    }
};