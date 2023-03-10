#pragma once
struct Node{
    Node* pNext;
    int value;
};
void LoadList(Node* &pHead);
void RemoveX(Node* &pHead);
void Delete(Node* &pHead);
