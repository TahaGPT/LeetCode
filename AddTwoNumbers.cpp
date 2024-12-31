// https://leetcode.com/problems/add-two-numbers/

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
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *root = new ListNode(0); // Dummy node to simplify handling of the head
        ListNode *result = root;          // This will be the node that we add new nodes to
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0)
        {
            int sum = carry; // Start with carry from previous iteration

            if (l1 != nullptr)
            {
                sum += l1->val; // Add value from l1 if it exists
                l1 = l1->next;  // Move to the next node in l1
            }

            if (l2 != nullptr)
            {
                sum += l2->val; // Add value from l2 if it exists
                l2 = l2->next;  // Move to the next node in l2
            }

            carry = sum / 10;                      // Calculate the new carry
            result->next = new ListNode(sum % 10); // Create a new node with the current digit
            result = result->next;                 // Move to the next node in the result list
        }

        return root->next; // Return the node following the dummy node (head of the result list)
    }
};