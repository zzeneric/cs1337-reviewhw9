#ifndef UPPERCASE_H
#define UPPERCASE_H

#include <iostream>
#include "FileFilter.h"
using namespace std;

class UpperCase: public FileFilter{
	public:
        void doFilter(ifstream &inFile, ofstream &outFile) const;
        char transform(char ch) const;
};

#endif