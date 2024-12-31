// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if(haystack.length() < needle.length())
        {
            int match = -1, mover = 0;

            for (int i = 0; i < needle.length(); i++)
            {
                if(needle[i] == haystack[mover])
                {
                    if(mover == 0)
                    {
                        match = i;
                    }
                    mover++;
                    if(mover == haystack.length())
                    {
                        return match;
                    }
                }
            }
        }
        else {
            int match = -1, mover = 0;

            for (int i = 0; i < haystack.length(); i++)
            {
                if (haystack[i] == needle[mover])
                {
                    if (mover == 0)
                    {
                        match = i;
                    }
                    mover++;
                    if (mover == needle.length())
                    {
                        return match;
                    }
                }
            }
        }
        return -1;
    }
};