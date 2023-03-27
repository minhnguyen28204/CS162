#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
    Stack Cur;
    init(Cur,2);
    int r = push(Cur,5);
    if (r) cout << "PUSHED SUCCESS!! \n";
    else cout << "CAPACITY REACH MAXIMUM!! \n";
    r = push(Cur,6);
    if (r) cout << "PUSHED SUCCESS!! \n";
    else cout << "CAPACITY REACH MAXIMUM!! \n";
    r = push(Cur,7);
    if (r) cout << "PUSHED SUCCESS!! \n";
    else cout << "CAPACITY REACH MAXIMUM!! \n";
    cout << "SIZE OF STACK " << size(Cur) << '\n';
    int top;
    r = pop(Cur,top);
    if (r) cout << "POP SUCCESS, VALUE: " << top << '\n';
    else cout << "POP FAIL, EMPTY STACK \n";
    pop(Cur,top);
    if (r) cout << "POP SUCCESS, VALUE: " << top << '\n';
    else cout << "POP FAIL, EMPTY STACK \n";
    deallocate(Cur);
    return 0;
}
