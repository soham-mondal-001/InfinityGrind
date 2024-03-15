class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double longestdiag=-1,maxarea=-1;
        for(int i=0;i<dimensions.size();i++)
        {
            int a=dimensions[i][0];
            int b=dimensions[i][1];
            int area=a*b;
            double diag=sqrt(a*a+b*b);
            if(diag>longestdiag)
            {
                maxarea=-1;
                longestdiag=diag;
                maxarea=area;
            }
            else if(diag==longestdiag&&area>maxarea)
            maxarea=area;
        }
        return maxarea;
    }
};