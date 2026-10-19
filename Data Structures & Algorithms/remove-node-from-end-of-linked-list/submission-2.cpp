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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head || !head->next) return nullptr;
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *left = dummy;
        ListNode *right = head;
        while (n > 0){
            right = right->next;
            n--;
        }

        while (right){
            right = right->next;
            left = left->next;
        }

        left->next = left->next->next;

        return dummy->next;
    }
};
