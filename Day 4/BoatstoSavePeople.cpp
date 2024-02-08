class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i,j=people.size()-1,ans=0;
        for(i=0;i<people.size();i++)
        {
            while(people[i]+people[j]>limit&&i<j)
                j--;
            if(i<j)
            {
                ans++;
                people[j]=-1;
                j--;
            }
            else
            break;
        }
        for(;i<people.size();i++)
        {
            if(people[i]!=-1)
            ans++;
        }
        return ans;
    }
};