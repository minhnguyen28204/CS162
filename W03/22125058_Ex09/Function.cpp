#include<bits/stdc++.h>
using namespace std;

void UserInput(double** &arr, int &n){
    cout << "Input amount of monkey: "; cin >> n;
    arr = new double*[n+1];
    for(int i=0; i<n; i++){
        arr[i] = new double[8];
        cout << "Input pounds of food the monkey " << i+1 << " eats in a week \n";
        for(int j=0; j<7; j++){
            cout << "Day " << j+1 << ": ";
            cin >> arr[i][j];
        }
    }
}

void Report(double** arr, int n){
    double* Average;
    Average = new double[8];
    double* Least; Least = new double[n+1];
    double* Greatest; Greatest = new double[n+1];
    for(int i=0; i<n; i++){
        Least[i] = 1000000000;
        Greatest[i] = 0;
    }
    for(int day = 0; day < 7; day ++){
        double total = 0.0;
        for(int i=0; i<n; i++) total += arr[i][day];
        Average[day] = total / n;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<7; j++){
            Least[i] = min(Least[i],arr[i][j]);
            Greatest[i] = max(Greatest[i],arr[i][j]);
        }
    }
    cout << "===================================================================================\n";
    cout << "Average amount of food eaten per day by the whole family of monkeys: \n";
    for(int i=0; i<7; i++){
        cout << "Day " << i+1 << ": " << Average[i] << '\n';
    }
    cout << "===================================================================================\n";
    cout << "The least and greatest amount of food eaten during the week by any one monkey: \n";
    for(int i=0; i<n; i++){
        cout << "The least amount of food eaten by monkey " << i+1 << " is: " << Least[i] << '\n';
        cout << "The greatest amount of food eaten by monkey " << i+1 << " is: " << Greatest[i] << '\n';
    }
    delete[] Average;
    delete[] Least;
    delete[] Greatest;
}
