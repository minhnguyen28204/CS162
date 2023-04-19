#include <fstream>

void EnterArray(std::ofstream &ofs, int n, int* arr){
    if (ofs.is_open()){
        ofs.write(reinterpret_cast<char*>(&n), sizeof(n));
        for(int i=0; i<n; i++){
            ofs.write(reinterpret_cast<char*>(&arr[i]),sizeof(arr[i]));
        }
    }
}

int GetMedian(int n, int* arr){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if (arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr[n/2];
}
