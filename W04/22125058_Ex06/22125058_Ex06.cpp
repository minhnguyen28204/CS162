#include <iostream>
#include "SinglyLinkedList.h"
#include "Function.h"

using namespace std;

int main()
{
    Node* Head1 = nullptr;
    Node* Head2 = nullptr;
    ifstream ifs("input.txt");
    LoadListFromFile(ifs,Head1);
    ifs.close();
    CreateSumList(Head1,Head2);
    ofstream ofs("output.txt");
    SaveListToFile(ofs,Head2);
    ofs << 0 << '\n';
    ofs.close();
    DeleteList(Head1);
    DeleteList(Head2);
    return 0;
}
