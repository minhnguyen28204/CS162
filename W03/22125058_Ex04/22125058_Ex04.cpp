#include <iostream>
#include "Function.h"

using namespace std;

int main()
{
    int* Arr;
    int n;
    cout << "Input amount of number: "; cin >> n;
    Arr = new int[n+1];
    for(int i=0; i<n; i++){
        cout << "Input number " << i+1 << ": ";
        cin >> Arr[i];
    }
    cout << "Mode of the array is: " << ModeOfTheArray(Arr,n) << '\n';
    delete[] Arr;
    return 0;
}
