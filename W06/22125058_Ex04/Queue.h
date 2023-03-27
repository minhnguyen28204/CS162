#pragma once

struct Node{
    Node* pNext;
    int data;
};

struct Queue{
    Node* head;
    Node* tail;
    int capacity;
};

void init(Queue &s, int capacity);
int enqueue(Queue &s, int x);
int dequeue(Queue &s);
bool isEmpty(Queue s);
void empty(Queue &s);
int size(Queue s);
void Delete(Queue &s);
