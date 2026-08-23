// https://leetcode.com/problems/reverse-integer/description/

class Solution
{
public:
    int reverse(int x)
    {
        if (x > 2147483647 || x < -2147483647)
            return 0;
        int n = 0;
        int x_ = x;
        while (x_)
        {
            if ((long long)n * 10 > 2147483647 || (long long)n * 10 < -2147483647)
                return 0;
            n *= 10;
            n += x_ % 10;
            x_ /= 10;
        }
        return n;
    }
};