#include <iostream>
using namespace std;

void Recaman(int n, int cur, int x, bool* arr){
    int New = x - cur;
    if (New <= 0 || arr[New]==true) New = x + cur;
    arr[New] = true;
    cout << New << ' ';
    if (cur+1==n) return;
    Recaman(n,cur+1,New,arr);
}
