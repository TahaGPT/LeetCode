// https://leetcode.com/problems/number-of-ways-to-split-array/?envType=daily-question&envId=2025-01-03

class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        int valid = 0;
        long long sum1 = 0;
        long long sum = accumulate(nums.begin(), nums.end(), 0LL);
        for (int i = 0; i < n - 1; i++) {
            sum1 += nums[i];
            if (sum1 >= sum - sum1)
                valid++;
        }
        return valid;
    }
};