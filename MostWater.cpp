// https: // leetcode.com/problems/container-with-most-water/

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int maxArea = 0;
        int i = 0, j = n - 1;
        while (i < j)
        {
            int width = j - i;
            int currArea = width * min(height[i], height[j]);
            maxArea = max(maxArea, currArea);
            if (height[i] < height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return maxArea;
    }
};