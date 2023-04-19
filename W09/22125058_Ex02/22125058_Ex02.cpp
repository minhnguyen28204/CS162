#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "Function.h"

using namespace std;


int main() {
    int choice = 0;
    while (choice!=1 && choice!=2 && choice!=3) {
        cout << "Choose an option:\n";
        cout << "1. Enter an array of dates and save it to input.bin\n";
        cout << "2. Load an array of dates from input.bin and find the newest date\n";
        cout << "3. Quit\n";
        cin >> choice;
    }
    if (choice==3) return 0;
    if (choice==1){
        string Name;
        cout << "Enter file name (Ex input.bin): "; cin >> Name;
        ofstream ofs;
        ofs.open(Name,ios::binary);
        int n; cout << "Enter number of array: "; cin >> n;
        Date* arr; arr = new Date[n+1];
        for(int i=0; i<n; i++){
            cout << "Input date (1-31): "; cin >> arr[i].date;
            cout << "input month (1-12): "; cin >> arr[i].month;
            cout << "Input year: "; cin >> arr[i].year;
        }
        SaveToFile(ofs,n,arr);
        ofs.close();
        delete[] arr;
    }
    if (choice==2){
        string Name;
        cout << "Enter folder path of file (Ex E:/folder1/file_name.bin): "; cin >> Name;
        ifstream ifs;
        ifs.open(Name,ios::binary);
        int n;
        ifs.read(reinterpret_cast<char*>(&n),sizeof(n));
        Date* arr;
        arr = new Date[n+1];
        for(int i=0; i<n; i++){
            ifs.read(reinterpret_cast<char*>(&arr[i]),sizeof(arr[i]));
        }
        ifs.close();
        Date Newest = GetNewestDay(n,arr);
        cout << "Newest date is: " << Newest.date << ' ' << Newest.month << ' ' << Newest.year << '\n';
        delete[] arr;
    }
    return 0;
}
