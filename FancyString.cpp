// https://leetcode.com/problems/delete-characters-to-make-fancy-string/?envType=daily-question&envId=2025-07-21

class Solution {
public:
    string makeFancyString(string s) {
        int k = 2;
        if(s.length() <= k)
            return s;
        string n;
        for(int i = 0; i < s.length();i++)
        {
            int p = n.length();
            if(p >= 2 && s[i] ==n[p - 1] && s[i] == n[p - 2])
                continue;
            else
                n += s[i];
        }
        return n;
    }
};