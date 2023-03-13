#include "SinglyLinkedList.h"

void CreateSumList(Node* &H1, Node* &H2){
    Node* C1 = H1->pNext;
    H2 = new Node;
    H2->value = H1->value;
    H2->pNext = nullptr;
    Node* C2 = H2;
    while (C1){
        Node* temp = new Node;
        temp->value = C2->value + C1->value;
        temp->pNext = nullptr;
        C2->pNext = temp;
        C2 = C2->pNext;
        C1 = C1->pNext;
    }
}
