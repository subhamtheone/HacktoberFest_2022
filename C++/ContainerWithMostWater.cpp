class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0, area = 0, l = 0, r = 0;
        int n = height.size();
        if (n < 2)
            return max;
        
        int left = 0, right = n - 1;

        while (left < right)
        {
            l = height[left];
            r = height[right];
            area = min(l, r) * (right - left);
            if (max < area)
                max = area;
                
            if (l < r)
            {
                left++;
                while (left < right && height[left] <= l)
                    left++;
            }
            else
            {
                right--;
                while (left < right && height[right] <= r)
                    right--;
            }
        }
        
        return max;
    }
};
