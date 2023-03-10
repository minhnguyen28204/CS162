#include<bits/stdc++.h>

int ModeOfTheArray(int* arr, int n){
    int* Appear_Times;
    Appear_Times = new int[1000005];
    for(int i=0; i<n; i++){
        Appear_Times[arr[i]]++;
    }
    int Occurs = 1, Value = -1;
    for(int i=0; i<n; i++){
        if (Appear_Times[arr[i]]>Occurs){
            Occurs = Appear_Times[arr[i]];
            Value = arr[i];
        }
    }
    delete[] Appear_Times;
    return Value;
}
