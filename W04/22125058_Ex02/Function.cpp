#include "SinglyLinkedList.h"

void RemoveDups(Node* &pHead){
    bool* IsAppear;
    IsAppear = new bool[1000005];
    for(int i=0; i<=1000000; i++) IsAppear[i] = 0;
    IsAppear[pHead->value] = 1;
    Node* Cur = pHead->pNext;
    Node* Prev = pHead;
    while (Cur){
        if (IsAppear[Cur->value]){
            Node* temp = Cur;
            Prev->pNext = Cur->pNext;
            Cur = Cur->pNext;
            delete temp;
        }
        else{
            IsAppear[Cur->value] = 1;
            Cur=Cur->pNext;
            Prev = Prev->pNext;
        }
    }
}
