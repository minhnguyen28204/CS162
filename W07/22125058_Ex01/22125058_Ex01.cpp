#include <iostream>
#include "Function.h"

using namespace std;

int main()
{
    int n, k;
    cout << "Input n: \n"; cin >> n;
    cout << "Input k: \n"; cin >> k;
    cout << n << "C" << k << " is: " << C(n,k);
    return 0;
}
