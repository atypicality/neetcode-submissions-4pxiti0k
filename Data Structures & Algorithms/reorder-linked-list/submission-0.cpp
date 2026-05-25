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
    void reorderList(ListNode* head) {
        // 0 - 2  3 - 1  2 - 4 - 5 - 3
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != nullptr && fast->next !=nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }


        ListNode* curr = slow->next;
        slow->next = nullptr;
        ListNode* prev = nullptr;
        while(curr != nullptr)
        {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        ListNode* replace = head;
        while(replace!=nullptr && prev!= nullptr)
        {
            ListNode* temp = replace->next;
            ListNode* temp2 = prev->next;
            replace->next = prev;
            prev->next = temp;
            replace = temp;
            prev = temp2;
        }
    }
};
