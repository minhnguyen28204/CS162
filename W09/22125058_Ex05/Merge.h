#include <fstream>
#include <string>
#include <iostream>
using namespace std;

void ReadCommandLine(int argc, const char * argv[], string &fp1, string &fp2, string &filename);
void MergeSplitFile(ofstream &ofs, ifstream &ifs, string filename, string fpath1);
