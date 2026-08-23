// https://leetcode.com/problems/two-best-non-overlapping-events/?envType=daily-question&envId=2025-12-23

class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end(), [](const vector<int>& a, const vector<int>& b)
        {
            return a[1] < b[1];
        });

        int n = events.size();
        vector<int> maxVals(n);
        maxVals[0] = events[0][2];
        for(int i = 1 ; i < n; i++)
        {
            maxVals[i] = max(maxVals[i - 1], events[i][2]);
        }

        int max_val = 0;
        for(int i = 0; i < n; i++)
        {
            int l = 0 , h = i - 1;
            int best = -1;
            while(l <= h)
            {
                int mid = (l + h) / 2;
                if(events[mid][1] < events[i][0])
                {
                    best = mid;
                    l = mid + 1;
                }
                else
                {
                    h = mid - 1;
                }

            }

            if(best != -1)
            {
                max_val = max(max_val, events[i][2] + maxVals[best]);
            }
            else
            {
                max_val = max(max_val, events[i][2]);
            }
        }

        return max_val;
    }
};
