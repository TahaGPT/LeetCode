// https://leetcode.com/problems/counting-words-with-a-given-prefix/?envType=daily-question&envId=2025-01-09

class Solution
{
public:
    int prefixCount(vector<string> &words, string pref)
    {
        int length = 0, n = words.size(), l = pref.length();
        for (int i = 0; i < n; i++)
        {
            int j = 0;
            for (; j < l && words[i][j] == pref[j]; j++)
                ;

            if (j == l)
                length++;
        }
        return length;
    }
};