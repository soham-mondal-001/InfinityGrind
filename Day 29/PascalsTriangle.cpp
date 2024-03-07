class Solution {
public:
    vector<vector<int>> generate(int rowNo) {
        vector<vector<int>> finalans;
        vector <int> ans={1};
	    vector <int> newans;
        finalans.push_back(ans);
	    if(rowNo==1)
		    return finalans;
	    ans.push_back(1);
        finalans.push_back(ans);
	    if(rowNo==2)
		    return finalans;
	    int i,j,sum;
	    for(i=3;i<=rowNo;i++)
	    {
		    newans={1};
		    for(j=0;j<ans.size()-1;j++)
		    {
			    sum=ans[j]+ans[j+1];
			    newans.push_back(sum);
		    }
		    newans.push_back(1);
		    ans=newans;
            finalans.push_back(ans);
	    }
	    return finalans;
    }
};