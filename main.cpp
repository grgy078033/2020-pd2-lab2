#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include "Calculator.h"
using namespace std;
int main() {
    int data_K, data_Ra, data_Rb;
    float data_Sa;
    
    ifstream inFile("file.in", ios::in);
    if(!inFile) {
        cerr << "Failed opening" << endl;
        exit(1);
    }

    ofstream outFile("file.out", ios::out);
    if(!outFile) {
        cerr << "Failed opening" << endl;
        exit(1);
    }

    inFile >> data_K >> data_Ra >> data_Rb;
    outFile << data_Ra << "\t" << data_Rb << endl;
    Calculator data(data_K, data_Ra, data_Rb);
    while(inFile >> data_Sa) {
        outFile << data.get_new_Ra(data_Sa) << "\t" << data.get_new_Rb(data_Sa) << endl;
        data.setAgain();
    }

    return 0;
}
