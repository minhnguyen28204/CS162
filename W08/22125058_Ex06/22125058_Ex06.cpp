#include <iostream>
#include "Function.h"

using namespace std;

int n;

int main()
{
    cin >> n;
    bool* visited;
    visited = new bool[n+2];
    for(int i=1; i<=n; i++) visited[i] = false;
    int* arr;
    arr = new int[n+2];
    NextPermutation(1,n,arr,visited);
    delete[] visited;
    delete[] arr;
    return 0;
}
