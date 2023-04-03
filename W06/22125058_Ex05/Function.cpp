#include <bits/stdc++.h>
#include "Function.h"
#include "Stack.h"
using namespace std;

void DecToBin(int x, int* bina, int &Size){
    Stack st;
    init(st,35);
    while (x){
        push(st,x%2);
        x = x/2;
    }
    Size = 0;
    while (!isEmpty(st)){
        int top;
        pop(st,top);
        bina[Size++] = top;
    }
}

void BinToDec(int* s, int Size, int &x){
    int CurPowOf2 = 1;
    for(int i=Size-1; i>=0; i--){
        if (s[i]==1) x = x + CurPowOf2;
        CurPowOf2 *= 2;
    }
}

void DecToHex(int x, char* s, int &Size){
    stack<char> st;
    while (x){
        int mod = x%16;
        if (mod < 10){
            st.push(mod+'0');
        }
        else{
            st.push(mod-10+'A');
        }
        x = x/16;
    }
    while (!st.empty()){
        s[Size++] = st.top();
        st.pop();
    }
}

void HexToDec(char* s, int Size, int &x){
    int CurPowOf16 = 1;
    for(int i=Size-1; i>=0; i--){
        if (s[i] >= '0' && s[i] <= 9){
            x = x +(s[i]-'0')*CurPowOf16;
        }
        else{
            x = x + (s[i]-'A'+10)*CurPowOf16;
        }
        CurPowOf16 *= 16;
    }
}
