class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int size = nums.size(); // a dynamic size of the unique elements that'll determine the unique elements
        for (int i = 0; i < size - 1; i++) // checking the array over the numbers and the loop size will decrease depending upon the numbers
        {
            if (nums[i] == nums[i + 1]) // if the two consecutive numbers are same then the first one will be eleminated
            {
                for (int j = i; j < nums.size() - 1; j++) // overwriting the chosen index
                {
                    nums[j] = nums[j + 1];
                }
                size--; // one element decreased
                nums[nums.size() - 1] = 0; // last added junk
                i--; // decreasing the index to the previous element so when it increments tyo the next value the index remains same and another duplicate (if exists) can be determined
            }
        }
        return size; // returbning the number of unique elements
    }
};