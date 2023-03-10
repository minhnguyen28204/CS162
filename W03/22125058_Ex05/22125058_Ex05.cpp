#include <iostream>
#include "Function.h"

using namespace std;

int main()
{
    int* Arr;
    int n;
    cout << "Input n: "; cin >> n;
    Arr = new int[n+1];
    for(int i=0; i<n; i++){
        cout << "Input " << i+1 << " number: ";
        cin >> Arr[i];
    }
    cout << "Median of the array is: " << Median(Arr,n) << '\n';
    delete[] Arr;
    return 0;
}
