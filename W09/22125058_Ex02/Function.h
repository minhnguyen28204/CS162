#include <fstream>
struct Date{
    int date;
    int month;
    int year;
};
void SaveToFile(std::ofstream &ofs, int n, Date* arr);
Date GetNewestDay(int n, Date* arr);
