// https://leetcode.com/problems/maximum-matrix-sum/?envType=daily-question&envId=2025-12-30

class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        bool even = true;
        int mini = INT_MAX;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0 ;  i < n; i++)
        {
            for(int j = 0  ; j < m ; j++)
            {
                if(matrix[i][j] < 0)
                    even = !even;
                int num = abs(matrix[i][j]);
                if(mini > num)
                    mini = num;
                sum += num;
            }
        }
        if(!even)
            sum = sum - (2*mini);
        return sum;

    }
};
