// https://leetcode.com/problems/longest-common-prefix/

// Write a function to find the longest common prefix string amongst an array of strings.

//     If there is no common prefix,
//     return an empty string "".

    class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string common = strs[0]; // initiallizing the initial common prefix
        for (int i = 1; i < strs.size(); i++) // starting from second because the first one has been initialized
        {
            string temp = ""; // temp for comparing common and current string
            for (int j = 0; j < common.length(); j++) // for the length of the current string
            {
                if (common[j] == strs[i][j]) // compares the string until it's common
                {
                    temp += common[j];
                }
                else /// if there's a difference then the loop will end
                {
                    break;
                }
            }
            common = temp; // at the end the compared string will be assigned to common
        }
        return common;
    }
};