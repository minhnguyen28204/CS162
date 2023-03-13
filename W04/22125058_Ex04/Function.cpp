#include "SinglyLinkedList.h"

void InsertEvenNums(Node* &pHead){
    Node* Cur = pHead->pNext;
    Node* Prev = pHead;
    int start = 4;
    AddBeginning(pHead,2);
    while (Cur){
        Node* temp = new Node;
        temp->value = start;
        temp->pNext = Cur;
        Prev->pNext = temp;
        Prev = Cur;
        Cur = Cur->pNext;
        start+=2;
    }
}
