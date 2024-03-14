class Solution {
public:
    string maximumTime(string time) {
        vector<char> arr={'2','9','3','5','9'};
        int first;
        for(int i=0;i<time.length();i++)
        {
            if(i==2)
            continue;
            int n=time[i]-'0';
            if(n>9)
            {
                if(i==1&&first==2)
                    time[i]=arr[i+1];
                else
                    time[i]=arr[i];
            }
            if(i==0)
            first=time[i]-'0';
            if(i==1&&n<10&&n>3&&first==2)
            time[0]='1';
        }

        return time;
    }
};