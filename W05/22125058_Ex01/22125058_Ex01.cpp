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
    bool hasCycle(ListNode *head) {
        ListNode* Tho = head;
        ListNode* Rua = head;
        do{
            if (Tho==nullptr) return false;
            Tho = Tho->next;
            if (Tho==nullptr) return false;
            Tho = Tho->next;
            Rua = Rua->next;
        } while (Tho && Rua && Tho!=Rua);
        if (Tho==nullptr) return false;
        return true;
    }
};