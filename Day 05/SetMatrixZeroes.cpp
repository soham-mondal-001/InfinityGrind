class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      int n=matrix.size();
	    int m=matrix[0].size();
	    int i,j;
        map<int,int> rowno;
        map<int,int> colno;
	    for(i=0;i<n;i++){
		    for(j=0;j<m;j++){
			    if(matrix[i][j]==0)
			    {
				    rowno[i]=1;
				    colno[j]=1;
			    }
		    }
	    }
	    for(i=0;i<n;i++)
		    for(j=0;j<m;j++)
			    if(rowno[i]==1||colno[j]==1)
				    matrix[i][j]=0;
    }
};