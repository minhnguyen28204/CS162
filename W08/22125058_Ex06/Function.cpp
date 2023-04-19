#include <iostream>
using namespace std;

void NextPermutation(int cur, int n, int* arr, bool* visited){
    if (cur==n+1){
        for(int i=1; i<=n; i++) cout << arr[i] << ' ';
        cout << endl;
        return;
    }
    for(int i=1; i<=n; i++){
        if (!visited[i]){
            arr[cur] = i;
            visited[i] = true;
            NextPermutation(cur+1,n,arr,visited);
            visited[i] = false;
        }
    }
}
