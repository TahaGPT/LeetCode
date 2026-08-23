// https://leetcode.com/problems/four-divisors/?envType=daily-question&envId=2025-12-30

class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n = nums.size();
        int total = 0;
        for(int i = 0 ;  i < n; i++)
        {
            int sq = sqrt(nums[i]);
            int div = 2, sum = nums[i] + 1;
            for(int j = 2; j <= sq; j++)
            {
                int ans = nums[i]/j;
                if(nums[i] % j == 0)
                {
                    if(j * j == nums[i]){
                        div++;
                        sum += j;}
                    else{
                        sum += ans;
                        sum += j;
                        div += 2;}
                    if(div > 4)
                        break;
                }
            }
            if(div == 4)
                total += sum;
        }
        return total;
    }
};
