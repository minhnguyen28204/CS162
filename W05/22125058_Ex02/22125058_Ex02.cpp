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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* LeftNode = nullptr;
        ListNode* NexNode = nullptr;
        ListNode* Cur = head;
        ListNode* Prev = nullptr;
        int id = 1;
        bool reverse = false;
        while (Cur){
            if (id==left) LeftNode = Prev, NexNode = Cur;
            if (id > left && id <= right) reverse = true;
            else reverse = false;
            if (reverse){
                ListNode* temp = Cur;
                Cur = Cur->next;
                temp->next = Prev;
                Prev = temp;
            }
            else{
                Prev = Cur;
                Cur = Cur->next;
            }
            id++;
            if (id==right+1){
                if (LeftNode) LeftNode->next = Prev;
                NexNode->next = Cur;
                if (left==1) head = Prev;
            }
        }
        return head;
    }

};