// https://leetcode.com/problems/distribute-elements-into-two-arrays-i/description/?envType=daily-question&envId=2026-08-22

class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> a; 
        vector<int> b;
        int size = nums.size();
        if(size == 2)
            return nums;
        a.emplace_back(nums[0]);
        b.emplace_back(nums[1]);
        for(int i = 2 ; i < size; i++)
        {
            if(a.back() >= b.back())
            {
                a.emplace_back(nums[i]);
            }
            else
            {
                b.emplace_back(nums[i]);
            }
        }
        vector<int> result;
        result.reserve(a.size() + b.size());
        result.insert(result.end(), a.begin(), a.end());
        result.insert(result.end(), b.begin(), b.end());     
        return result;   
    }
};
