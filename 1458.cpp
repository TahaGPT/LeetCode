// https://leetcode.com/problems/max-dot-product-of-two-subsequences/?envType=daily-question&envId=2026-01-08

class Solution {
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        int maxi = 0;
        vector<vector<int>> dp(n, vector<int>(m)); 
        for(int i = 0 ; i < n; i++){
            for(int j = 0; j < m; j++)
            {
                int product = nums1[i] * nums2[j];
                if(i > 0 && j > 0)
                    product += max(0, dp[i - 1][j - 1]);

                maxi = product;

                if(i > 0)
                    maxi = max(maxi, dp[i - 1][j]);
                if(j > 0)
                    maxi = max(maxi, dp[i][j - 1]);
                dp[i][j] = maxi;
            }
        }   
        return dp[n - 1][m - 1];
    }
};
