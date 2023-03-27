#include <bits/stdc++.h>
#include "Queue.h"
using namespace std;

int main()
{
    Queue qu;
    init(qu,2);
    int r = enqueue(qu,2);
    if (r==1){
        cout << "PUSHED!! \n";
    }
    else cout << "MAX CAPACITY \n";
    r = enqueue(qu,3);
    if (r==1){
        cout << "PUSHED!! \n";
    }
    else cout << "MAX CAPACITY \n";
    r = enqueue(qu,4);
    if (r==1){
        cout << "PUSHED!! \n";
    }
    else cout << "MAX CAPACITY \n";
    r = dequeue(qu);
    if (r==1) cout << "POPED!! \n";
    else cout << "EMPTY \n";
    r = dequeue(qu);
    if (r==1) cout << "POPED!! \n";
    else cout << "EMPTY \n";
    r = dequeue(qu);
    if (r==1) cout << "POPED!! \n";
    else cout << "EMPTY \n";
    Delete(qu);
    return 0;
}
