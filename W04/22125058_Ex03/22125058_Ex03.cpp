#include <iostream>
#include <fstream>
#include "SinglyLinkedList.h"
#include "Function.h"

using namespace std;

int main()
{
    Node* pHead = nullptr;
    ifstream ifs("input.txt");
    LoadListFromFile(ifs,pHead);
    ifs.close();

    ReverseList(pHead);

    ofstream ofs("output.txt");
    SaveListToFile(ofs,pHead);
    ofs << 0 << '\n';
    ofs.close();

    DeleteList(pHead);

    return 0;
}
