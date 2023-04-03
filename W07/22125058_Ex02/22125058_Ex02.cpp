#include <iostream>
#include "Function.h"

using namespace std;

int main()
{
    int n;
    cout << "Input x: "; cin >> n;
    if (n==0) cout << 0;
    else cout << toBinary(n);
    return 0;
}
