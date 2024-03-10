class Solution {
public:
    vector<int> getRow(int rowIndex) {
	    vector<int> ans;
	    int x=1,i;
	    for(i=0;i<rowIndex+1;i++)
	    {
		    if(i==0)
			    x=1;
		    else
			    x=round(((double)x/(double)i)*(double)(rowIndex-i+1));
		    ans.push_back(x);
	    }
	    return ans;
    }
};