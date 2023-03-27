#include <bits/stdc++.h>
#include "Stack.h"
using namespace std;

void init(Stack &s, int capacity){
    s.data = new int[capacity+1];
    s.top = 0;
    s.capacity = capacity;
}

bool push(Stack &s, int x){
    s.top++;
    if (s.top>s.capacity){
        s.top--;
        return false;
    }
    s.data[s.top] = x;
    return true;
}

bool pop(Stack &s, int &value){
    if (s.top==0) return false;
    value = s.data[s.top];
    s.top--;
    return true;
}

bool isEmpty(Stack &s){
    if (s.top==0) return true;
    return false;
}

void empty(Stack &s){
    s.top = 0;
}

int size(Stack &s){
    return s.top;
}

void deallocate(Stack &s){
    delete[] s.data;
}
