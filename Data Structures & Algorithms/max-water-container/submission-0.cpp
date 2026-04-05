class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0, j=heights.size()-1;
        int maxarea=0;
        while(i<j){
            int width= j-i;
            int ht= min(heights[i],heights[j]);
            int area= width * ht;
            maxarea = max(maxarea, area);
            if(heights[i]<=heights[j]) i++;
            else if(heights[i]>=heights[j]) j--;
        }
        return maxarea;
    }
};
