// https://leetcode.com/problems/merge-two-sorted-lists/description/

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL) {
            return list2;
        } else if (list2 == NULL) {
            return list1;
        } else {
            ListNode* temp;
            bool flag = true;
            if (list1->val > list2->val) {
                flag = false;
                temp = list2;
                list2 = list2->next;
            } else {
                temp = list1;
                list1 = list1->next;
            }
            ListNode* result = temp;
            while (list1 || list2) {
                if(list1 && list2)
                {
                    if(list1->val > list2->val)
                    {
                        temp->next = list2;
                        list2 = list2->next;
                    }
                    else
                    {
                        temp->next = list1;
                        list1 = list1->next;
                    }
                    temp = temp->next;
                }
                else if(list1)
                {
                    temp->next = list1;
                    break;
                }
                else
                {
                    temp->next = list2;
                    break;
                }

            }
        return result;
        }
    }
};