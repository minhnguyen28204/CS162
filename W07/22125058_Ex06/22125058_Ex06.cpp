#include <iostream>
#include "Function.h"

using namespace std;

int main()
{
    bool* arr;
    arr = new bool[10005];
    for(int i=1; i<=10000; i++) arr[i] = false;
    int n; cout << "Input n: "; cin >> n;
    Recaman(n,0,0,arr);
    return 0;
}
