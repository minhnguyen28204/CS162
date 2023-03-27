#pragma once

struct Stack{
    int *data;
    int top;
    int capacity;
};
void init(Stack &s, int capacity);
bool push(Stack &s, int x);
bool pop(Stack &s, int &value);
bool isEmpty(Stack &s);
void empty(Stack &s);
int size(Stack &s);
void deallocate(Stack &s);
