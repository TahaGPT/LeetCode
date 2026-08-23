// https://leetcode.com/problems/valid-parentheses/description/

// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

//                                                                                  An input string is valid if :

//     Open brackets must be closed by the same type of brackets.Open brackets must be closed in the correct order.Every close bracket has a corresponding open bracket of the same type.

class Solution
{
public:
    bool check(string checker, int &ind, char toCheck = '\0') //helper function
    {
        if (checker[ind] == '\0') // if it has reached the end
        {
            return checker[ind] == toCheck;
        }

        char starter = checker[ind++]; // current character

        if (starter == '(' || starter == '[' || starter == '{') // if current character is one of the parantheses
        {
            char myCheck; // then create new expected bracket
            switch (starter) // set it accordingly
            {
            case '(':
            {
                myCheck = ')';
                break;
            }
            case '[':
            {
                myCheck = ']';
                break;
            }
            case '{':
            {
                myCheck = '}';
                break;
            }
            }
            if (!check(checker, ind, myCheck)) // and check for it, if found, proceed if not, function will end the imaginary stack and return false
            {
                return false;
            }
        }
        else if (starter == ')' || starter == ']' || starter == '}') // if the current character is one of the closing brackets
        {
            return starter == toCheck;
        }

        return check(checker, ind, toCheck); // if the current character is not a bracket
    }

    bool isValid(string s) // main func
    {
        int index = 0;
        return check(s, index);
    }
};