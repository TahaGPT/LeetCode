// https://leetcode.com/problems/maximize-happiness-of-selected-children/?envType=daily-question&envId=2025-12-23

class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.rbegin(), happiness.rend());
        int n = happiness.size();
        long long happy = 0;
        for(int i = 0; i < n && i < k; i++)
        {
            happy += max(happiness[i] - i, 0);
        }
        return happy;
    }
};
