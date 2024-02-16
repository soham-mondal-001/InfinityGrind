class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int alen=(arr.size()+1)/2,ans=0,xf,i,s=0,e=arr.size()-1;
        vector<int> a;
        for(i=0;i<alen;i++)
        {
            a.push_back(1);
        }
        xf=alen;
        cout<<xf<<endl;
        while(s<=e)
        {
            for(i=0;i<alen;i++)
            {
                if(s==0)
                break;
                if(a[i]+1<=(i*2)+1&&arr.size()-s>=(i*2)+1)
                {
                    a[i]++;
                    xf++;
                }
            }
            cout<<xf<<endl;
            if(s<e)
                ans=ans+(arr[s]*xf)+(arr[e]*xf);
            else
            ans+=(arr[s]*xf);
            s++;
            e--;
        }
        return ans;
    }
};
//this code got complicated as I was trying to improve time complexity; don't know whether I managed to do that 