#include <bits/stdc++.h>
#include "Function.h"

using namespace std;

int main()
{
    int Chose = -1;
    while (Chose!=1 && Chose!=2){
        cout << "1. Enters an array of integers from keyboard. The program will save the array to a binary file. \n";
        cout << "2. Loads an array of integers from a binary file. The program will find the median and output to console. \n";
        cin >> Chose;
    }
    if (Chose==1){
        string Name;
        cout << "Enter name of the file (Ex: input.bin) :"; cin >> Name;
        ofstream ofs;
        ofs.open(Name,ios::binary);
        int n;
        cout << "Enter number of elements: "; cin >> n;
        int* arr; arr = new int[n+1];
        for(int i=0; i<n; i++){
            cout << "Enter " << i+1 << " number: "; cin >> arr[i];
        }
        EnterArray(ofs,n,arr);
        ofs.close();
        delete[] arr;
    }
    else if (Chose==2){
        string name;
        cout << "Enter folder path of the file (Ex: E:/folder1/file_name.bin) : "; cin >> name;
        ifstream ifs;
        ifs.open(name, ios::binary);
        int n;
        ifs.read(reinterpret_cast<char*>(&n),sizeof(n));
        int* arr; arr = new int[n+1];
        for(int i=0; i<n; i++){
            ifs.read(reinterpret_cast<char*>(&arr[i]),sizeof(arr[i]));
        }
        ifs.close();
        cout << "Median of the array is: " << GetMedian(n,arr) << '\n';
    }
    return 0;
}
