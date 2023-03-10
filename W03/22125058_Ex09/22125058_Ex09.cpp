#include <iostream>
#include "Function.h"

using namespace std;

int main()
{
    double** Arr;
    int n;
    UserInput(Arr,n);
    Report(Arr,n);
    delete[] Arr;
    return 0;
}
