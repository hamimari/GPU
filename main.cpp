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
    std::ifstream  data("acc_master.csv");
    std::string line;
    string arraylist [100000][100];
    //ArrayList^ myAL = gcnew ArrayList;

    while(std::getline(data,line))
    {
        std::stringstream  lineStream(line);
        std::string        cell;
        int i =0;
        while(std::getline(lineStream,cell,','))
        {
            //data.getline(arraylist[i],100);
            cout << line <<endl;
            i=i+1;
        }
    }
    return 0;
}
