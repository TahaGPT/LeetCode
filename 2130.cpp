// https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/?envType=daily-question&envId=2026-06-14

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* help(ListNode* hi, ListNode* bye, int& maxi){
        if(bye == NULL)
        {
            return hi;
        }
        hi = help(hi, bye->next, maxi);
        maxi = max(maxi, hi->val + bye->val);
        hi = hi->next;
        return hi;
    }

    int pairSum(ListNode* head) {
        int maxi = INT_MIN;
        help(head, head, maxi);
        return maxi;
    }
};
