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

void AddEnd(Node* &pHead, int x){
    Node* Cur = pHead;
    while (Cur->pNext){
        Cur = Cur->pNext;
    }
    Node* temp = new Node;
    temp->value = x;
    temp->pNext = nullptr;
    Cur->pNext = temp;
}

void AddBeginning(Node* &pHead, int x){
    Node* temp = new Node;
    temp->value = x;
    temp->pNext = pHead;
    pHead = temp;
}

void SaveListToFile(ofstream &ofs, Node* &pHead){
    while (pHead){
        ofs << pHead->value << ' ';
        pHead = pHead->pNext;
    }
}
