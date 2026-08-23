// https://leetcode.com/problems/palindrome-number/

// Given an integer x, return true if x is a palindrome, and false otherwise.

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0) // if it is negative, it is evident that it's not going to be a palindrome
        {
            return false;
        }
        else if (x == 0) // if it's zero, then obviously it's a palindrome
        {
            return true;
        }
        long y = x; // making aa copy
        long me = 0;
        while (x) // reversing the number
        {
            me *= 10;
            me += x % 10;
            x /= 10;
        }
        if (me == y) // if the actual number is equal to its reverse
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};