#include "SinglyLinkedList.h"

void MergeList(Node* &pH, Node* &H1, Node* &H2){
    Node* Cur = pH;
    Node* C1 = H1;
    Node* C2 = H2;
    bool isFirst = true;
    while (C1 || C2){
        //If C1 is empty -> add C2
        if (C1==nullptr){
            Cur->pNext = C2;
            Cur = Cur->pNext;
            C2 = C2->pNext;
            continue;
        }
        //If C2 is empty -> add C1
        if (C2==nullptr){
            Cur->pNext = C1;
            Cur = Cur->pNext;
            C1 = C1->pNext;
            continue;
        }

        if (isFirst){
            if (Cur==nullptr){
                pH = C1;
                Cur = pH;
                C1 = C1->pNext;
            }
            else{
                Cur->pNext = C1;
                Cur = Cur->pNext;
                C1 = C1->pNext;
            }
        }
        else{
            Cur->pNext = C2;
            Cur = Cur->pNext;
            C2 = C2->pNext;
        }
        isFirst = 1-isFirst;
    }
    Cur->pNext = nullptr;
}
