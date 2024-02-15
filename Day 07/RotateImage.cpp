class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int i,j,s,e;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
                swap(matrix[i][j],matrix[j][i]);
        }
        for(i=0;i<n;i++)
        {
            s=0;e=n-1;
            while(s<e)
                swap(matrix[i][s++],matrix[i][e--]);
        }
    }
};