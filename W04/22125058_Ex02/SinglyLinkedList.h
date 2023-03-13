#pragma once
#include <fstream>

struct Node{
    int value;
    Node* pNext;
};

void LoadListFromFile(std::ifstream &ifs, Node* &pHead);

void DeleteList(Node* &pHead);

void SaveListToFile(std::ofstream &ofs, Node* &pHead);
