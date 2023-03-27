#include <bits/stdc++.h>
#include "Queue.h"
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
    if (size(s)==0) return true;
    return false;
}

int enqueue(Queue &s, int x){
    if (size(s)==s.capacity) return -1;
    if (s.head==s.tail && s.tail==nullptr){
        s.head = s.tail = new Node;
        s.head->data = x;
        s.head->pNext = nullptr;
    }
    else{
        Node* Temp = new Node;
        Temp->data = x;
        Temp->pNext = nullptr;
        s.tail->pNext = Temp;
        s.tail = Temp;
    }
    return 1;
}

int dequeue(Queue &s){
    if (isEmpty(s)) return -1;
    if (s.head==s.tail){
        s.head = s.tail = nullptr;
    }
    else{
        Node* temp = s.head;
        s.head = s.head->pNext;
        delete temp;
    }
    return 1;
}

void empty(Queue &s){
    while (!isEmpty(s)) dequeue(s);
}

void Delete(Queue &s){
    Node* cur = s.head;
    while (cur){
        Node* temp = cur;
        cur = cur->pNext;
        delete temp;
    }
}
