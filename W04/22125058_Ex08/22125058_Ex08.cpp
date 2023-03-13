#include <iostream>
#include "SinglyLinkedList.h"
#include "Function.h"

using namespace std;

int main()
{
    Node* H1 = nullptr;
    Node* H2 = nullptr;
    ifstream ifs("input.txt");
    LoadListFromFile(ifs,H1);
    LoadListFromFile(ifs,H2);
    ifs.close();

    Node* pHead = nullptr;
    MergeList(pHead, H1, H2);
    H1 = nullptr;
    H2 = nullptr;

    ofstream ofs("output.txt");
    SaveListToFile(ofs,pHead);
    ofs << 0 << '\n';
    ofs.close();

    DeleteList(pHead);

    return 0;
}
