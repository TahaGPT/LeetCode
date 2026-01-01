// https://leetcode.com/problems/plus-one/?envType=daily-question&envId=2025-12-30

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size() - 1; i >= 0; i--)
        {
            digits[i] += 1;
            if(digits[i] <= 9)
                break;
            else
            {
                digits[i] = 0;
                if(i == 0)
                    digits.insert(digits.begin(), 1);
            }
        }
        return digits;
    }
};
