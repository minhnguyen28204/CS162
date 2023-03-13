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

    InsertEvenNums(pHead);

    ofstream ofs("output.txt");
    SaveListToFile(ofs,pHead);
    ofs << 0 << ' ';
    ofs.close();

    DeleteList(pHead);

    return 0;
}
