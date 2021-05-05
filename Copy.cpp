#include "Copy.h"

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void Copy::doFilter(ifstream &inFile, ofstream &outFile) const{
	outFile << inFile.rdbuf();
}
