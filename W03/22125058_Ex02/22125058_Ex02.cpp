#include <iostream>
#include "Array.h"

using namespace std;

int main()
{
    int a = 2, b = 10;
    int* x = &a;
    int* y = &b;
    doSomething(x,y);
    cout << a << ' ' << b << '\n';
    return 0;
}
