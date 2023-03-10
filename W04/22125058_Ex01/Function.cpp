#include<bits/stdc++.h>
#include "Function.h"
using namespace std;

void InsertAtEnd(Node* &Head, Node* &Tail, int value){
    if (Head==nullptr){
        Head = Tail = new Node;
        Head->value = value;
        Head->pNext = nullptr;
    }
    else{
        Tail = Tail->pNext;
        Tail = new Node;
        Tail->value = value;
        Tail->pNext = nullptr;
    }
}

void LoadList(Node* &pHead){
    Node* Cur = pHead;
    int x;
    ifstream ifs("input.txt");
    while (ifs>>x){
        if (x==0) break;
        if (pHead==nullptr){
            pHead = new Node;
            pHead->value = x;
            pHead->pNext = nullptr;
            Cur = pHead;
        }
        else{
            Node* temp = new Node;
            temp->value = x;
            temp->pNext = nullptr;
            Cur->pNext = temp;
            Cur = temp;
        }
    }
    ifs.close();
    ofstream ofs("output.txt");
    Node* cur = pHead;
    while (cur){
        ofs << cur->value << ' ';
        cur = cur->pNext;
    }
    ofs.close();
}

void RemoveX(Node* &pHead){
    int x;
    cout << "Input x: "; cin >> x;
    while (pHead->value==x){
        Node* temp = pHead;
        pHead = pHead->pNext;
        delete temp;
    }
    Node* Cur = pHead;
    while (Cur->pNext){
        if (Cur->pNext->value==x){
            Node* temp = Cur->pNext;
            Cur->pNext = Cur->pNext->pNext;
            delete temp;
        }
        else Cur = Cur->pNext;
    }
    ofstream ofs("output.txt");
    Cur = pHead;
    while (Cur){
        ofs << Cur->value << ' ';
        Cur = Cur->pNext;
    }
    ofs.close();
}

void Delete(Node* &pHead){
    while (pHead){
        Node* temp = pHead;
        pHead = pHead->pNext;
        delete temp;
    }
}
