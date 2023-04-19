#include <iostream>
#include "Function.h"

using namespace std;

int main()
{
    bool ok = false;
    int** arr;
    arr = new int*[9];
    for(int i=1; i<=8; i++) arr[i] = new int[9];
    for(int i=1; i<=8; i++){
        for(int j=1; j<=8; j++){
            arr[i][j] = 0;
        }
    }
    bool* colFlag; colFlag = new bool[9];
    for(int i=1; i<=8; i++) colFlag[i] = false;
    bool* pFlag; pFlag = new bool[9];
    for(int i=1; i<=8; i++) pFlag[i] = false;
    bool* sFlag; sFlag = new bool[9];
    for(int i=1; i<=8; i++) sFlag[i] = false;
    for(int j=1; j<=8; j++){
        colFlag[j] = true;
        pFlag[j-7] = true;
        sFlag[9-j] = true;
        arr[1][j] = 1;
        TryQueen(2,colFlag,pFlag,sFlag,arr,ok);
        if (!ok){
            arr[1][j] = 0;
            colFlag[j] = false;
            pFlag[j-7] = false;
            sFlag[9-j] = false;
        }
        else break;
    }
    return 0;
}
