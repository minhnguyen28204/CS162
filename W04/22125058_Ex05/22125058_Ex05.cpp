#include <iostream>
#include "SinglyLinkedList.h"
#include "Function.h"

using namespace std;

int main()
{
    Node* pHead = nullptr;
    int AddNum;
    ifstream ifs("input.txt");
    ifs >> AddNum;
    LoadListFromFile(ifs,pHead);
    ifs.close();

    AddNumber(pHead,AddNum);

    ofstream ofs("output.txt");
    SaveListToFile(ofs,pHead);
    ofs << 0 << ' ';
    ofs.close();

    DeleteList(pHead);

    return 0;
}
