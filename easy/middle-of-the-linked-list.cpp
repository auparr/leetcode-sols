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
    int list_len = 1;
    ListNode* middleNode(ListNode* head) {
        if (head->next != nullptr) {
            list_len += 1;
            middleNode(head->next);
        }
        int middle_len = list_len / 2;
        for (int i = 1; i <= middle_len; i++ ) {
            if (head != nullptr){
            head = head->next;
            }
        }
        return head;
    }
};
