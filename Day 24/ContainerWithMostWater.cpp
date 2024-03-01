class Solution {
public:
    int maxArea(vector<int>& height) {
        int n,s,e,area,maxarea=0;
        n=height.size();
        s=0;e=n-1;
        while(s<e)
        {
            area=(e-s)*min(height[s],height[e]);
            maxarea=max(maxarea,area);
            if(height[s]<height[e])
            s++;
            else
            e--;
        }
        return maxarea;
    }
};