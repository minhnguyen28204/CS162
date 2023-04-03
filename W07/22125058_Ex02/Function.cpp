#include "Function.h"
using namespace std;

string toBinary(int x){
    string tmp = "";
    if (x>0){
        tmp += toBinary(x/2);
        tmp += (x%2+'0');
        x = x/2;
    }
    return tmp;
}
