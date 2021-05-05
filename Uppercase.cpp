#include "Uppercase.h"

#include <iostream>
#include <fstream>
using namespace std;

void UpperCase::doFilter(ifstream &inFile, ofstream &outFile) const{
	char nextChar;

	while(inFile.get(nextChar))
    {
        nextChar = transform(nextChar);
        outFile.put(nextChar);
    }
}

char UpperCase::transform(char ch) const{
	if (isalpha(ch)){
        return(toupper(ch));
	}else{
		return(ch);
    }
}