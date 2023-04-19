#include <fstream>
#include "Function.h"

void SaveToFile(std::ofstream &ofs, int n, Date* arr){
    if (ofs.is_open()){
        ofs.write(reinterpret_cast<char*>(&n),sizeof(n));
        for(int i=0; i<n; i++){
            ofs.write(reinterpret_cast<char*>(&arr[i]),sizeof(arr[i]));
        }
    }
}

Date GetNewestDay(int n, Date* arr){
    Date Newest;
    Newest.date = 1;
    Newest.month = 1;
    Newest.year = 1;
    for(int i=0; i<n; i++){
        if (Newest.year < arr[i].year){
            Newest = arr[i];
        }
        else if (Newest.year == arr[i].year && Newest.month < arr[i].month){
            Newest = arr[i];
        }
        else if (Newest.year == arr[i].year && Newest.month == arr[i].month && Newest.date < arr[i].date){
            Newest = arr[i];
        }
    }
    return Newest;
}
