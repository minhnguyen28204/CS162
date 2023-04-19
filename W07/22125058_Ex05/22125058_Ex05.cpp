#include <iostream>
#include "Function.h"

using namespace std;

int main()
{
    int n; cout << "Input n: ";
    cin >> n;
    if (n<=0) cout << n;
    else PrintPattern(n,n,-5);
    return 0;
}
