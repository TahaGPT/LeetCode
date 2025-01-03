// https : // leetcode.com/problems/string-to-integer-atoi/

class Solution
{
public:
    int myAtoi(string s)
    {
        int num = 0;
        bool flag = false;
        int i = 0, max = 2147483647;
        for (; s[i] == ' '; i++)
            ;
        cout << "Ending : " << i << endl;
        if (s[i] == '-')
        {
            cout << "- found\n";
            flag = true;
            i++;
        }
        else if (s[i] == '+')
            i++;

        for (; i < s.length() && s[i] >= '0' && s[i] <= '9'; i++)
        {
            cout << s[i] << endl;
            cout << "number : " << num << endl;
            if ((long long)num * 10 + (s[i] - '0') >= max)
                return (long long)num * 10 + (s[i] - '0') == max ? flag ? -max : max : flag ? -max - 1
                                                                                            : max;
            num *= 10;
            num += (s[i] - '0');
        }

        return flag ? -num : num;
    }
};