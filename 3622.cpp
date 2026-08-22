// https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/?envType=daily-question&envId=2026-08-22

class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0, product = 1;
        int n1 = n;
        while(n1 > 0)
        {
            int digit = n1 % 10;
            n1 /= 10;
            sum += digit;
            product *= digit;
        }

        if(n % (sum + product) == 0)
            return true;
        else
            return false;
    }
};
