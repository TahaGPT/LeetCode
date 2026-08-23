// https://leetcode.com/problems/minimum-penalty-for-a-shop/?envType=daily-question&envId=2025-12-26

class Solution {
public:
    int bestClosingTime(string customers) {
        int count = 0, penalty = 0;
        int  n = customers.size();

        for(int i = 0 ; i < n; i++)
        {
            count += (customers[i] == 'Y');
        }

        int minimum = count;
        for(int i = 0 ; i < n; i++)
        {
            if(customers[i] == 'Y')
            {
                count--;
                if(minimum > count){
                    minimum = count;
                    penalty = i + 1;
                }
            }
            else
            {
                count++;
            }
        }
        return penalty;
    }
};
