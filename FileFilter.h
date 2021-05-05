#ifndef FILEFILTER_H
#define FILEFILTER_H

#include <iostream>
using namespace std;

class FileFilter{
	public:
	    virtual void doFilter(ifstream &in, ofstream &out) const = 0;	//pure virtual function
};

#endif