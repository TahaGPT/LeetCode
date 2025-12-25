// https://leetcode.com/problems/apple-redistribution-into-boxes/description/?envType=daily-question&envId=2025-12-23

class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n = apple.size();
        int total = 0;
        for(int i = 0 ; i < n; i++)
        {
            total += apple[i];
        }
        sort(capacity.rbegin(), capacity.rend());
        n = capacity.size();
        int use = 0;
        for(int i = 0 ; i < n; i++)
        {
            use += capacity[i];
            if(use >= total)
            {
                return i + 1;
            }
        }
        return 0;
    }
};
