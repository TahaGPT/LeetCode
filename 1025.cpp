// https://leetcode.com/problems/divisor-game/

class Solution {
    public:
        bool divisorGame(int n) {
            if(n & 1)
                return false;
            else 
                return true;
            
        }
    };