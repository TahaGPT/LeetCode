// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

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
        ListNode* deleteDuplicates(ListNode* head) {
            if(!head)
                return NULL;
            ListNode* root = head;
            while(root->next != NULL)
            {
                if(root->val == root->next->val)
                {
                    root->next = root->next->next;
                }
                else
                {
                    root = root->next;
                }
            }
            return head;
        }
    };