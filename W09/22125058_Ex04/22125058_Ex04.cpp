#include <iostream>
#include "Spilt.h"

using namespace std;

int main(int argc, const char * argv[])
{
    string fpath1 = "";
    string fpath2 = "";
    string filename = "";
    int Option = 0;
    int x;
    ReadPathFromCommandLine(fpath1,fpath2,filename,argc,argv,Option,x);

    if (Option==1){
        unsigned char* buffer;
        int length;
        ifstream ifs;
        ifs.open(fpath1,ios::binary);
        ReadSplitFile(ifs,buffer,length,x,fpath2);
        ifs.close();
        ofstream ofs;
        int part_len = length / x;
        int lef_size = length % x;
        int cur = 0;
        for(int i=1; i<=x; i++){
            string file_path = fpath2 + ".part";
            string num = to_string(i);
            if (i < 10) num = "0" + num;
            file_path += num;
            ofs.open(file_path, ios::trunc | ios::binary);
            if (i==x) part_len += lef_size;
            int cur_size = part_len;
            ofs.write(reinterpret_cast<char*>(buffer+cur),cur_size);
            cur += cur_size;
            ofs.close();
        }
    }
    else if (Option==2){
        unsigned char* buffer;
        int length;
        ifstream ifs;
        ifs.open(fpath1,ios::binary);
        ReadSplitFile(ifs,buffer,length,x,fpath2);
        ifs.close();
        ofstream ofs;
        int part_len = x;
        int cur = 0;
        int i = 1;
        while (cur < length){
            string file_path = fpath2 + ".part";
            string num = to_string(i);
            if (i < 10) num = "0" + num;
            file_path += num;
            ofs.open(file_path, ios::trunc | ios::binary);
            int cur_size = min(part_len,length-cur);
            ofs.write(reinterpret_cast<char*>(buffer+cur),cur_size);
            cur += cur_size;
            i++;
            ofs.close();
        }
    }

    return 0;
}
