#include <iostream>
#include "Function.h"

using namespace std;

int main()
{
    Node* pHead = nullptr;
    LoadList(pHead);
    RemoveX(pHead);
    Delete(pHead);
    return 0;
}
