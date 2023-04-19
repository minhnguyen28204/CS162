#include "Function.h"
#include "iostream"
using namespace std;

void OutputArray(int* arr, int n, int cur){
    if (cur==n) return;
    cout << arr[cur] << ' ';
    OutputArray(arr,n,cur+1);
}

void OutputreversedArray(int* arr, int n, int cur){
    if (cur==n) return;
    OutputreversedArray(arr,n,cur+1);
    cout << arr[cur] << ' ';
}

int SumPositive(int* arr, int n, int cur){
    if (cur==n) return 0;
    return SumPositive(arr,n,cur+1)+arr[cur];
}

int DistinctValues(int* arr, int* nums, int n, int cur){
    if (cur==n) return 0;
    if (nums[arr[cur]]) return DistinctValues(arr,nums,n,cur+1);
    nums[arr[cur]]++;
    return 1 + DistinctValues(arr,nums,n,cur+1);
}
