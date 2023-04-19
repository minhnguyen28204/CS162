#include <fstream>
#include <iostream>
using namespace std;

void ReadPathFromCommandLine(string &fpath1, string &fpath2, string filename, int argc, const char * argv[], int &option, int &x){
    bool is_path1 = false;
    bool is_first1 = true;
    bool is_first2 = true;
    bool is_path2 = false;
    bool is_number = false;

    for(int i=1; i<argc; i++){
        string temp = argv[i];
        if (temp=="-s") is_path1 = true;
        else if (temp=="-d") is_path1 = false, is_path2 = true;
        else if (temp=="-numpart"){
            option = 1;
            is_path2 = false;
            is_number = true;
        }
        else if (temp=="-sizeapart"){
            option = 2;
            is_path2 = false;
            is_number = true;
        }
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
        else if (is_number){
            x = stoi(temp);
        }
    }

    for(int i=fpath1.size()-1; i>=0; i--){
        if (fpath1[i]=='/') break;
        filename = fpath1[i] + filename;
    }
    fpath2 += "/" + filename;
}

void ReadSplitFile(ifstream &ifs, unsigned char* &buffer, int &length, int numpart, string fpath2){
    ifs.seekg (0, ios::end);
    length = ifs.tellg();
    ifs.seekg (0, ios::beg);
    buffer = new unsigned char[length+1];
    buffer[length] = '\0';
    ifs.read(reinterpret_cast<char*>(buffer),length);
}
