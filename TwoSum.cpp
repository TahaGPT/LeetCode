// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

//     You may assume that each input would have exactly one solution,
//     and you may not use the same element twice.

//         You can return the answer in any order.

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size() - 1; i++) // skipping the last element to avoid the overflow in the next loop
        {
            for (int j = i + 1; j < nums.size(); j++) // starting from the nexxt element to avoid ctradictions
            {
                if (nums[i] + nums[j] == target) // if the sum becomes equal it'll return the indices
                {
                    return {i, j};
                }
            }
        }
        return {-1, -1}; // if we don't find any solution, both the indices will be zero
    }
};