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
        if (!list1 && !list2) return nullptr;
        if (!list1) return list2;
        if (!list2) return list1;

        ListNode *curr1 = list1;
        ListNode *curr2 = list2;
        ListNode *tail, *head;
        if (list1->val >= list2->val){
            tail = list2;
            head = list2;
            curr2 = list2->next;
        } else{
            tail = list1;
            head = list1;
            curr1 = curr1->next;
        }
        while(curr1 && curr2){
            if (curr1->val < curr2->val) {
                tail->next = curr1;
                tail = tail->next;
                curr1 = curr1->next;
                continue;
            }
                tail->next = curr2;
                tail = tail->next;
                curr2 = curr2->next;
        }
        
        if (curr1){
            tail->next = curr1;
        } else {
            tail->next = curr2;
        }

        return head;
    }
};
