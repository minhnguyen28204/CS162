#include <iostream>
#include <string>
#include <fstream>
#include "Merge.h"

using namespace std;

int main(int argc, const char * argv[])
{
    string fpath1 = "";
    string fpath2 = "";
    string filename = "";
    ReadCommandLine(argc,argv,fpath1,fpath2,filename);
    cout << fpath1 << '\n' << fpath2 << '\n' << filename << '\n';

    ofstream ofs(fpath2 + "/" + filename, ios::out | ios::binary);
    ifstream ifs;
    MergeSplitFile(ofs,ifs,filename,fpath1);
    ofs.close();

    return 0;
}
