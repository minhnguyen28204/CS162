#include <iostream>
using namespace std;

void TryQueen(int x, bool* colFlag, bool* pFlag, bool* sFlag, int** arr, bool& OK){
    if (x==9){
        for(int i=1; i<=8; i++){
            for(int j=1; j<=8; j++){
                cout << arr[i][j] << ' ';
            }
            cout << endl;
        }
        OK = true;
        return;
    }
    for(int j=1; j<=8; j++){
        int pDia = x+j-8;
        int sDia = x-j+8;
        if (!colFlag[j] && !pFlag[pDia] && !sFlag[sDia]){
            colFlag[j] = true;
            pFlag[pDia] = true;
            sFlag[sDia] = true;
            arr[x][j] = 1;
            TryQueen(x+1,colFlag,pFlag,sFlag,arr,OK);
            if (!OK){
                arr[x][j] = 0;
                colFlag[j] = false;
                pFlag[pDia] = false;
                sFlag[sDia] = false;
            }
            else break;
        }
    }
}
