// https://leetcode.com/problems/length-of-last-word/description/

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int i = s.length() - 1;
        for (; s[i] < 'A'; i--)
            ;
        int l = 0;
        for (; i >= 0 && ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')); i--, l++)
            ;
        return l;
    }
};