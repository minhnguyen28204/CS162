#include <iostream>
#include "Function.h"

using namespace std;

int main()
{
    int* s;
    s = new int[35];
    int Size = 0;
    int x = 0;
    DecToBin(35,s,Size);
    cout << "Convert 35 to binary: ";
    for(int i=0; i<Size; i++) cout << s[i];
    cout << endl;
    BinToDec(s,Size,x);
    cout << "Convert "; for(int i=0; i<Size; i++) cout << s[i]; cout << " to decimal: ";
    cout << x << '\n';

    char* Hex;
    Hex = new char[35];
    Size = 0;
    int y = 0;
    DecToHex(172,Hex,Size);
    cout << "Convert 175 to hexadecimal: ";
    for(int i=0; i<Size; i++) cout << Hex[i];
    cout << endl;
    HexToDec(Hex,Size,y);
    cout << "Convert ";for(int i=0; i<Size; i++) cout << Hex[i];cout << " to decimal: ";
    cout << y << '\n';

    return 0;
}
