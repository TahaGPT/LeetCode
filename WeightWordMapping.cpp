// https://leetcode.com/problems/weighted-word-mapping/?envType=daily-question&envId=2026-06-13

class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";
        for(auto word : words){
            int index = 0;
            for(auto c : word){
                index += weights[c - 'a'];
            }
            ans += ('z' - (index % 26));
        }

        return ans;
    }
};
