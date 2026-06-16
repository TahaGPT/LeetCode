// https://leetcode.com/problems/process-string-with-special-operations-i/?envType=daily-question&envId=2026-06-16

class Solution {
public:
    string processStr(string s) {
        int n = s.length();
        string result = "";
        if(n){
            for(char c : s){
                switch(c){
                    case '*':
                        if (!result.empty()) {
                            result.pop_back(); 
                        }
                        break;
                    case '#':
                        result += result;
                        break;
                    case '%':
                        reverse(result.begin(), result.end());
                        break;
                    default:
                        result += c;
                }
            }
        }
        return result;
    }
};
