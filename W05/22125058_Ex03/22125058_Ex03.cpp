/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* Cur1 = headA;
        ListNode* Cur2 = headB;
        while(Cur1!=Cur2){
            if (Cur1==nullptr){
                Cur1 = headA;
            }
            else Cur1 = Cur1->next;
            if (Cur2==nullptr){
                Cur2 = headB;
            }
            else Cur2 = Cur2->next;
        }
        return Cur2;
    }
};