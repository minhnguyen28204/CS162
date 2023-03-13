#include "SinglyLinkedList.h"

void CreateList(Node* &pH, Node* &H1, Node* &H2){
    Node* Cur = pH;
    Node* C1 = H1;
    Node* C2 = H2;
    int IsOdd=1;
    while(Cur){
        if (IsOdd){
            if (C1==nullptr){
                H1 = Cur;
                C1 = Cur;
            }
            else{
                C1->pNext = Cur;
                C1 = C1->pNext;
            }
        }
        else{
            if (C2==nullptr){
                H2 = Cur;
                C2 = Cur;
            }
            else{
                C2->pNext = Cur;
                C2 = C2->pNext;
            }
        }
        Cur = Cur->pNext;
        IsOdd = 1 - IsOdd;
    }
    C1->pNext = nullptr;
    C2->pNext = nullptr;
}
