#include <fstream>
using namespace std;

void ReadPathFromCommandLine(string &fpath1, string &fpath2, string filename, int argc, const char * argv[]){
    bool is_path1 = false;
    bool is_first1 = true;
    bool is_first2 = true;
    bool is_path2 = false;

    for(int i=1; i<argc; i++){
        string temp = argv[i];
        if (temp=="-s") is_path1 = true;
        else if (temp=="-d") is_path1 = false, is_path2 = true;
        else if (is_path1){
            string temp = argv[i];
            if (is_first1) fpath1 = temp, is_first1 = false;
            else fpath1 += " " + temp;
        }
        else if (is_path2) {
            string temp = argv[i];
            if (is_first2) fpath2 = temp, is_first2 = false;
            else fpath2 += " " + temp;
        }
    }

    for(int i=fpath1.size()-1; i>=0; i--){
        if (fpath1[i]=='/') break;
        filename = fpath1[i] + filename;
    }
    fpath2 += "/" + filename;
}


void ReadCopyFile(ifstream &is, unsigned char* &buffer, int &length){
    is.seekg (0, ios::end);
    length = is.tellg();
    is.seekg (0, ios::beg);
    buffer = new unsigned char[length+1];
    buffer[length] = '\0';
    is.read(reinterpret_cast<char*>(buffer),length);
}

void WriteCopyFile(ofstream &os, unsigned char* &buffer, int &length){
    os.seekp(0,ios::beg);
    os.write(reinterpret_cast<char*>(buffer),length);
}
