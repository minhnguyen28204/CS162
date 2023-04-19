#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include "Copy.h"

using namespace std;

int main(int argc, const char * argv[])
{
    string fpath1 = "";
    string fpath2 = "";
    string filename = "";

    ReadPathFromCommandLine(fpath1,fpath2,filename,argc,argv);

    int length;
    unsigned char * buffer;

    ifstream is;
    is.open(fpath1, ios::binary );
    ReadCopyFile(is,buffer,length);
    is.close();

    ofstream os;
    os.open(fpath2, ios::trunc | ios::binary);
    WriteCopyFile(os,buffer,length);
    os.close();
    return 0;
}
