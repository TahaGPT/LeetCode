// https://leetcode.com/problems/longest-palindromic-substring/

class Solution
{
public:
    string longestPalindrome(string s)
    {
        int start = 0, end = 0;

        int l = s.length();
        for (int i = 0; i < l; i++)
        {
            int start_ = i, end_ = i;
            while (start_ >= 0 && end_ < l && s[start_] == s[end_])
            {
                start_--;
                end_++;
            }
            if (end - start < end_ - start_)
            {
                start = start_;
                end = end_;
            }

            start_ = i;
            end_ = i + 1;
            while (start_ >= 0 && end_ < l && s[start_] == s[end_])
            {
                start_--;
                end_++;
            }
            if (end - start < end_ - start_)
            {
                start = start_;
                end = end_;
            }
        }

        return s.substr(start + 1, end - start - 1);
    }
};