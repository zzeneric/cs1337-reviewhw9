#ifndef COPY_H
#define COPY_H

#include <iostream>
#include "FileFilter.h"
using namespace std;

class Copy: public FileFilter{
	public: 
        void doFilter(ifstream &inFile, ofstream &outFile) const;
};

#endif