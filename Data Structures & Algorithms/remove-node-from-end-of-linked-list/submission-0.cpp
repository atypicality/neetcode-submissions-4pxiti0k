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
        ListNode* temp = head;
        int size = 0;
        while(temp!=nullptr)
        {
            temp = temp->next;
            ++size;
        }
        
        if(size - n >= 0)
        {
            if(size-n == 0) return head->next;
            temp = head;
            while(size != n + 1)
            {
                temp = temp->next;
                --size;
            }
            if(temp->next) temp->next=temp->next->next;
            return head;
        }
        else
        {
            return head;
        }
    }
};
