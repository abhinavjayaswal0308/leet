class Solution {
public:
    int maxArea(vector<int>& height) {

        int st = 0;
        int end = height.size() - 1;
        int maxi;
        int r;

        while (st < end) {

            int h = min(height[st], height[end]);
            int width = end - st;

            int r = h * width;

            maxi=max(maxi,r);

            if (height[st] < height[end]) {
                st++;
            } else {
                end--;
            }
        }

        return maxi;
    }
};