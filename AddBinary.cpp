// https://leetcode.com/problems/add-binary/

class Solution
{
public:
    string addBinary(string a, string b)
    {
        int n1 = a.length();
        int n2 = b.length();
        string res = "";
        int carry = 0;
        for (int i = n1 - 1, j = n2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
        {
            int result = 0;
            if (i >= 0 && a[i] == '1')
                result += 1;
            if (j >= 0 && b[j] == '1')
                result += 1;
            result += carry;
            if (result % 2 == 0)
            {
                res += '0';
            }
            else
            {
                res += '1';
            }
            if (result > 1)
                carry = 1;
            else
                carry = 0;
            cout << "Result: " << res << " Carry: " << carry << endl;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};