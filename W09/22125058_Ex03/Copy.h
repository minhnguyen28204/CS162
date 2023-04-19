#include <fstream>
using namespace std;

void ReadPathFromCommandLine(string &fpath1, string &fpath2, string filename, int argc, const char * argv[]);
void ReadCopyFile(ifstream &is, unsigned char* &buffer, int &length);
void WriteCopyFile(ofstream &os, unsigned char* &buffer, int &length);
