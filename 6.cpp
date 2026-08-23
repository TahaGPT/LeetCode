// https://leetcode.com/problems/zigzag-conversion/
class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1)
            return s;

        vector<vector<char>> col(numRows);

        bool flag = true;
        int r = 0;

        for (int i = 0; i < s.length(); i++)
        {
            col[r].push_back(s[i]);
            if (flag)
                r++;
            else
                r--;
            if (r == numRows)
            {
                flag = !flag;
                r -= 2;
            }
            else if (r < 0)
            {
                flag = !flag;
                r += 2;
            }
        }

        string result;
        for (int i = 0; i < col.size(); i++)
        {
            for (int j = 0; j < col[i].size(); j++)
            {
                result += col[i][j];
            }
        }

        return result;
    }
};
