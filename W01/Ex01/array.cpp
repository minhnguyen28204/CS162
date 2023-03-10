#include<bits/stdc++.h>
#include "array.h"

using namespace std;

void Load(Dates *&cur, int &n){
    ifstream ifs("input.txt");
    Dates* tempArray;
    tempArray = new Dates[100005];
    n = 0;
    int date, month, year;
    while (ifs >> year >> month >> date){
        if (date==-1) break;
        (tempArray+n)->day = date;
        (tempArray+n)->month = month;
        (tempArray+n)->year = year;
        n++;
    }
    cur = new Dates[n+1];
    for(int i=0; i<n; i++){
        (cur)[i].day = tempArray[i].day;
        (cur)[i].month = tempArray[i].month;
        (cur)[i].year = tempArray[i].year;
    }
    ifs.close();
    delete []tempArray;
}

int cmp(Dates a, Dates b){
    if (a.year > b.year) return 1;
    else if (b.year > a.year) return -1;
    else if (a.month > b.month) return 1;
    else if (a.month < b.month) return -1;
    else if (a.day > b.day) return 1;
    else if (a.day < b.day) return -1;
    else return 0;
}

void Sort(Dates *cur, int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if (cmp(cur[i],cur[j])==1) {
                    swap(cur[i],cur[j]);
            }
        }
    }
}

void Save(Dates* cur, int n){
    ofstream ofs("output.txt");
    for(int i=0; i<n; i++){
        ofs << cur[i].year << ' ' << cur[i].month << ' ' << cur[i].day << '\n';
    }
    ofs.close();
}
