#include "Merge.h"

void ReadCommandLine(int argc, const char * argv[], string &fpath1, string &fpath2, string &filename){
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
    for(int i=fpath1.size()-8; i>=0; i--){
        if (fpath1[i]=='/') break;
        filename = fpath1[i] + filename;
    }
    for(int i=fpath1.size()-1; i>=0; i--){
        if (fpath1[i]=='/'){
            fpath1.pop_back();
            break;
        }
        fpath1.pop_back();
    }
}

void MergeSplitFile(ofstream &ofs, ifstream &ifs, string filename, string fpath1){
    ofs.seekp(ios::beg);
    for(int i=1;; i++){
        string number = to_string(i);
        if (i < 10) number = "0" + number;
        string path = fpath1 + "/" + filename + ".part" + number;
        cout << path << '\n';
        ifs.open(path,ios::binary);
        if (ifs.fail()){
            break;
        }
        unsigned char * buffer;
        int len;
        ifs.seekg(0,ios::end);
        len = ifs.tellg();
        ifs.seekg(0,ios::beg);
        buffer = new unsigned char[len+1];
        buffer[len] = '\0';
        ifs.read(reinterpret_cast<char*>(buffer),len);
        ofs.write(reinterpret_cast<char*>(buffer),len);
        ifs.close();
    }
}
