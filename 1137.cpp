// https://leetcode.com/problems/n-th-tribonacci-number/

class Solution {
    public:
        int tribonacci(int n) {
            int x = 0, y = 1, z = 1, a = 0;
            if(n == 0)
                return x;
            else if (n == 1 || n == 2)
                return y;
            while(n > 2)
            {
                a = x + y + z;
                x = y;
                y = z;
                z = a;
                n--;
            }
            return a;
        }
    };