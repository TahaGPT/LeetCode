// https://leetcode.com/problems/merge-sorted-array/

class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            int k = m;
            for(int i = 0, j = 0; i < k + n;)
            {
                if(i < k && j < n)
                {
                    if(nums1[i] >= nums2[j])
                    {
                        nums1.insert(nums1.begin() + i, nums2[j]);
                        j++;
                        k++;
                    }
                    i++;
                }
                else if(j < n)
                {
                    nums1.insert(nums1.begin() + i, nums2[j]);
                    j++;
                    i++;
                }
                else
                    i++;
            }
            while (nums1.size() != m + n && !nums1.empty() && nums1.back() == 0) {
                nums1.pop_back(); 
        }
        }
    };