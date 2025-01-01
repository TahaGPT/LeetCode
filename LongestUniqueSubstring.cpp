// https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result = 0;
        if (!s.length())
            return 0;
        string str = "";
        for (int i = 0; i < s.length() - result; i++) {
            int j = 0;
            while (i + j < s.length() &&
                   str.find(s[i + j]) == std::string::npos) {
                str += s[i + j];
                j++;
            }
            if (j > result) {
                result = j;

            }
                str = "";
        }

        return result;
    }
};