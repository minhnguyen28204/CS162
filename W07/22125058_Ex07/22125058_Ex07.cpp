#include <iostream>
#include "Function.h"

using namespace std;

int main()
{
    int* nums; nums = new int[100005];
    for(int i=0; i<100000; i++) nums[i] = 0;
    int n; cin >> n;
    int* arr; arr = new int[n+1];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    OutputArray(arr,n,0); cout << endl;
    OutputreversedArray(arr,n,0); cout << endl;
    cout << SumPositive(arr,n,0) << '\n';
    cout << DistinctValues(arr,nums,n,0) << '\n';
    return 0;
}
