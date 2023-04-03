#include "Function.h"
string toHex(int x){
    if (x<0) return "";
    else if (x<16){
        if (0 <= x && x <= 9) return string(1,x+'0');
        return string(1,x+'A'-10);
    }
    else return toHex(x/16) + toHex(x%16);
}
