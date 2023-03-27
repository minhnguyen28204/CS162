#include <bits/stdc++.h>
using namespace std;

void init(Queue &s, int capacity){
    s.head = nullptr;
    s.tail = nullptr;
    s.capacity = capacity;
}

int size(Queue s){
    int cnt = 0;
    Node* cur = s.head;
    while(cur){
        cnt++;
        cur = cur->pNext;
    }
    return cnt;
}

bool isEmpty(Queue s){
    if (Size(s)==0) return true;
    return false;
}

int enqueue(Queue &s, int x){
    if (size(s)==s.capacity) return -1;
    Node* Head = s.head;
    Node* Tail = s.tail;
    if (Head==Tail && Tail==nullptr){
        Head = Tail = new Node;
        Head->data = x;
        Head->pNext = nullptr;
    }
    else{
        Node* Temp = new Node;
        Temp->data = x;
        Temp->pNext = nullptr;
        Tail->pNext = Temp;
        Tail = Temp;
    }
    return 1;
}

int dequeue(Queue &s){
    if (isEmpty(s)) return -1;
    int head = s.head;
    int tail = s.tail;
    if (head==tail){
        head = tail = nullptr;
    }
    else{
        Node* temp = head;
        head = head->pNext;
        delete temp;
    }
    return 1;
}

void empty(Queue &s){
    while (!isEmpty(s)) dequeue(s);
}
