#include<iostream>
void PrintPattern(int x, int old, int add){
    std::cout << x;
    if (x==old && add==5) return;
    std::cout << ", ";
    if (x <= 0) add = 5;
    PrintPattern(x+add,old,add);
}
