#include<bits/stdc++.h>
using namespace std;

double Median(int* Arr, int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if (Arr[i] > Arr[j]){
                int temp = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = temp;
            }
        }
    }
    if (n%2) return Arr[n/2];
    else return ((double)(Arr[n/2]) + (double)(Arr[n/2-1]))/2;
}
