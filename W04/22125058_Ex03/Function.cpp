#include "SinglyLinkedList.h"

void ReverseList(Node* &pHead){
    Node* Cur = pHead;
    Node* Next = pHead->pNext;
    Cur->pNext = nullptr;
    Node* Prev = Cur;
    while (Next){
        Cur = Next;
        Next = Next->pNext;
        Cur->pNext = Prev;
        Prev = Cur;
    }
    pHead = Cur;
}
