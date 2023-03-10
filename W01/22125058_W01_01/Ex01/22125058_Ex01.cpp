#include <bits/stdc++.h>
#include "array.h"

using namespace std;

int main()
{
    int n;
    Dates* Array;
    Load(Array,n);
    Sort(Array,n);
    Save(Array,n);
    delete []Array;
    return 0;
}
