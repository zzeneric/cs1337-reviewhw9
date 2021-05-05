#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include <iostream>
#include "FileFilter.h"
using namespace std;

class Encryption: public FileFilter{

	public: 
        Encryption();
	    Encryption(int newKey);

	    void doFilter(ifstream &inFile, ofstream &outFile) const;

        char transform(char ch) const;
    
    private:
        int key;
};

#endif