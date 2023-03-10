#include <iostream>
#include "Function.h"

using namespace std;

int main()
{
    char* cstr;
    cstr = new char[100005];
    cin.get(cstr,'\n');
    if (isPalindrome(cstr)){
        cout << "Palindrome!";
    }
    else cout << "Not Palindrome";
    delete[] cstr;
    return 0;
}
