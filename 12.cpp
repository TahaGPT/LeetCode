// https://leetcode.com/problems/integer-to-roman/

class Solution
{
public:
    int arr[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string arr2[13] = {"M", "CM", "D", "CD", "C", "XC", "L",
                       "XL", "X", "IX", "V", "IV", "I"};
    string intToRoman(int num)
    {
        string res = "";
        for (int i = 0; i < 13 && num > 0; i++)
        {
            while (num >= arr[i])
            {
                num -= arr[i];
                res += arr2[i];
            }
        }
        return res;
    }
};