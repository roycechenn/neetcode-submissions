class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res = 0;
        int left = 0; int right = heights.size() - 1;
        while(left < right){
            res = max(res,(right - left) * min(heights[left], heights[right]));
            if (heights[left] <= heights[right]) left++;
            else right--;
        }

        return res;
    }
};
