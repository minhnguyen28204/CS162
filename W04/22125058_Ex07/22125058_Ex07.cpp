#include <iostream>
#include "SinglyLinkedList.h"
#include "Function.h"

using namespace std;

int main()
{
    Node* pHead = nullptr;
    ifstream ifs("input.txt");
    LoadListFromFile(ifs,pHead);
    ifs.close();

    Node* H1 = nullptr;
    Node* H2 = nullptr;
    CreateList(pHead,H1,H2);
    pHead = nullptr;

    ofstream ofs("output.txt");
    SaveListToFile(ofs,H1);
    ofs << 0 << '\n';
    SaveListToFile(ofs,H2);
    ofs << 0 << '\n';
    ofs.close();

    DeleteList(H1);
    DeleteList(H2);
    return 0;
}
