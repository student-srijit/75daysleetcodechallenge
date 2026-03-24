class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int mwater = 0;
        int left = 0;
        int right = height.size() - 1;
        
        while (left < right) {
            int cwidth = right - left;
            int cheight = min(height[left], height[right]);
            int carea = cwidth * cheight;
            mwater = max(mwater, carea);
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        } 
        return mwater;
    }
};