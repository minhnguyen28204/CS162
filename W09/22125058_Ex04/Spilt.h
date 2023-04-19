#include <fstream>
using namespace std;

void ReadPathFromCommandLine(string &fpath1, string &fpath2, string filename, int argc, const char * argv[], int &option, int &x);
void ReadSplitFile(ifstream &ifs, unsigned char* &buffer, int &length, int numpart, string fpath2);
