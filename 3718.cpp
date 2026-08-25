// https://leetcode.com/problems/smallest-missing-multiple-of-k/description/?envType=daily-question&envId=2026-06-14

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int result = k;
        for(int i = 0 ; i < n; i++)
        {
            if(nums[i] == result)
            {
                result += k;
            }
        }
        return result;
    }
};
