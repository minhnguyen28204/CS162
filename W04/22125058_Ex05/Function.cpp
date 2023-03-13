#include "SinglyLinkedList.h"

void AddNumber(Node* &pHead, int num){
    if (pHead->value > num){
        AddBeginning(pHead,num);
        return;
    }
    Node* Prev = pHead;
    Node* Cur = Prev->pNext;
    while (Cur){
        if (Cur->value >= num){
            Node* temp = new Node;
            temp->value = num;
            temp->pNext = Cur;
            Prev->pNext = temp;
            return;
        }
        else{
            Prev = Cur;
            Cur = Cur->pNext;
        }
    }
    Node* temp = new Node;
    temp->value = num;
    temp->pNext = nullptr;
    Prev->pNext = temp;
}
