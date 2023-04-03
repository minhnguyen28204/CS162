#include "Function.h"

int C(int n, int k){
    if (k > n) return 0;
    if (k==0 || k==n) return 1;
    return C(n-1,k) + C(n-1,k-1);
}
