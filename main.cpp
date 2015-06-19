#include <iostream>
#include "header.h"
#include <sstream>
#include <fstream>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    // variable declare
    std::ifstream master("acc_master.csv");
    std::ifstream reff("acc_ref.csv");
    std::string line;
    //std::string line;
    vector<std::string> listValueMaster;
    vector<std::string> listValueRef;

    // baca dari acc master masukan ke list
    while(std::getline(master,line))
    {
        std::stringstream  lineStream(line);
        std::string        cell;
        while(std::getline(lineStream,cell,','))
        {
            listValueMaster.push_back(line);
        }
    }

    cout << "isi list data master" << endl;
    for(int j=0; j<listValueMaster.size(); j++){
        cout << listValueMaster[j] << endl;
    }

    // baca dari acc ref masukan ke list
    while(std::getline(reff,line))
    {
        std::stringstream  lineStream(line);
        std::string        cell;
        while(std::getline(lineStream,cell,','))
        {
            listValueRef.push_back(line);
        }
    }

    cout << "isi list data ref" << endl;
    for(int j=0; j<listValueRef.size(); j++){
        cout << listValueRef[j] << endl;
    }
    return 0;
}
