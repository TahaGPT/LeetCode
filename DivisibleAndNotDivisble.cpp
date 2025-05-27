// https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/?envType=daily-question&envId=2025-05-27

class Solution
{
public:
    int differenceOfSums(int n, int m)
    {
        int num1 = 0, num2 = 0;
        num1 = (n * (n + 1)) / 2;
        num2 = ((float)(n / m) / 2) * (m + (m * (n / m)));
        num1 -= (2 * num2);
        return num1;
    }
};