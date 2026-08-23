// https://leetcode.com/problems/roman-to-integer/

// Roman numerals are represented by seven different symbols : I, V, X, L, C, D and M.

class Solution
{
public:
    int romanToInt(string s)
    {
        int *arr = new int[7]{1, 5, 10, 50, 100, 500, 1000}; // specifying numbers according to the alphabets of roman numbers
        int result = 0;
        char *myArr = new char[7]{'I', 'V', 'X', 'L', 'C', 'D', 'M'}; // same as the number array
        int max = 1;
        for (int i = s.length() - 1; i >= 0; i--) // checking the given roman number from the last
        {
            int ind = -1; // variable to check which number came
            for (int j = 0; j < 7; j++)
            {
                if (s[i] == myArr[j]) // checking which number (roman digit) came 
                {
                    ind = j; // setting the number
                    break;
                }
            }
            if (arr[ind] < max) // if the number is one lesss than the actual round of roman digit
            {
                result -= arr[ind];
            }
            else
            {
                max = arr[ind]; // if maximum digit occurs
                result += arr[ind]; // adding the digits to the numbers
            }
        }
        return result;
    }
};