// https://leetcode.com/problems/plus-one/

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size();
        if (n == 0)
            return {1};
        digits[n - 1]++;
        if (digits[n - 1] > 9)
        {
            int num = 0;
            while (digits[n - 1] > 9)
            {
                num = digits[n - 1] / 10;
                digits[n - 1] %= 10;
                if (n - 2 < 0)
                    break;
                n--;
                digits[n - 1] += num;
                num = 0;
            }
            if (n - 1 == 0 && num != 0)
            {
                reverse(digits.begin(), digits.end());
                digits.emplace_back(num);
                reverse(digits.begin(), digits.end());
            }
        }
        return digits;
    }
};