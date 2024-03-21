class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0,aptr=a.length()-1,bptr=b.length()-1,sum=0;
        string ans="";
        while(aptr>=0&&bptr>=0)
        {
            int x=carry+(int)(a[aptr--]-'0')+(int)(b[bptr--]-'0');
            if(x==0)
            {
                sum=0;
                carry=0;
            }
            else if(x==1)
            {
                sum=1;
                carry=0;
            }
            else if(x==2)
            {
                sum=0;
                carry=1;
            }
            else
            {
                sum=1;
                carry=1;
            }
            ans=ans+(char)('0'+sum);
        }
        while(aptr>=0)
        {
            int x=(int)(a[aptr--]-'0')+carry;
            if(x==0)
            {
                sum=0;
                carry=0;
            }
            else if(x==1)
            {
                sum=1;
                carry=0;
            }
            else if(x==2)
            {
                sum=0;
                carry=1;
            }
            ans=ans+(char)('0'+sum);
        }
        while(bptr>=0)
        {
            int x=(int)(b[bptr--]-'0')+carry;
            if(x==0)
            {
                sum=0;
                carry=0;
            }
            else if(x==1)
            {
                sum=1;
                carry=0;
            }
            else if(x==2)
            {
                sum=0;
                carry=1;
            }
            ans=ans+(char)('0'+sum);
        }
        if(carry==1)
        ans=ans+'1';
        int s=0,e=ans.length()-1;
        while(s<e)
            swap(ans[s++],ans[e--]);
        return ans;
    }
};