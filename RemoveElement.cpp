class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int size = nums.size(); // creating a temporary necessary size
        for (int i = 0; i < size; i++) // the loop will run according to the decreasing necessary size
        {
            if (nums[i] == val) // if the value matches
            {
                for (int j = i; j < nums.size() - 1; j++) // that index will be overwritten by the other elements
                {
                    nums[j] = nums[j + 1];
                }
                nums[nums.size() - 1] = 0; // last index is emeptyy to it will be given some random value
                size--; // one element has been removed so number of necessary elements has also decreased
                i--; // tge index remains same to check continuous occurances
            }
        }
        return size; // returning the number of necessary elements
    }
};