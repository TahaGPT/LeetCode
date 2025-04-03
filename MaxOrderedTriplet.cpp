// https : // leetcode.com/problems/maximum-value-of-an-ordered-triplet-i/description/?envType=daily-question&envId=2025-04-02

        class Solution
{
public:
    long long maximumTripletValue(vector<int> &nums)
    {
        long long int res = INT_MIN;
        long long int l = res;
        int n = nums.size();
        for (int i = 1; i < n - 1; i++)
        {
            int a = *max_element(nums.begin(), nums.begin() + i);
            int b = *max_element(nums.begin() + i + 1, nums.end());
            l = (long long)(a - nums[i]) * b;
            res = res < l ? l : res;
        }
        return res > 0 ? res : 0;
    }
};