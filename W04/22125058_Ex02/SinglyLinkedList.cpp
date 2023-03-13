#include<bits/stdc++.h>
using namespace std;
#include "SinglyLinkedList.h"

void LoadListFromFile(ifstream &ifs, Node* &pHead){
    Node* Cur = pHead;
    int x=0;
    while (ifs >> x){
        if (x==0) break;
        if (pHead==nullptr){
            pHead = Cur = new Node;
            pHead->value = x;
            pHead->pNext = nullptr;
        }
        else{
            Node* temp = new Node;
            Cur->pNext = temp;
            temp->value = x;
            temp->pNext = nullptr;
            Cur = Cur->pNext;
        }
    }
}

void DeleteList(Node* &pHead){
    while (pHead){
        Node* temp = pHead;
        pHead = pHead->pNext;
        delete temp;
    }
}

void SaveListToFile(ofstream &ofs, Node* &pHead){
    while (pHead){
        ofs << pHead->value << ' ';
        pHead = pHead->pNext;
    }
}
