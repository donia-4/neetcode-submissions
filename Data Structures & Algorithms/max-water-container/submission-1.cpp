class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size()-1;
        int res = 0;
        while(l<r){
            res = max(res, (r-l)*min(heights[l], heights[r]));
            if(heights[l]<heights[r]) ++l;
            else if(heights[l]>heights[r])--r;
            else {
               if(heights[l+1]>=heights[r-1])++l;
               else --r;
            }
        }
        return res;
    }
};
