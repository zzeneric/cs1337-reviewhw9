#include "Encryption.h"

#include <iostream>
#include <fstream>
using namespace std;

Encryption::Encryption(){
    key = 5;
}

Encryption::Encryption(int newKey){
    key = newKey;
}

void Encryption::doFilter(ifstream &inFile, ofstream &outFile) const{
	char nextChar;

	while(inFile.get(nextChar))
    {
		if ( isalpha(nextChar) || ispunct(nextChar) || nextChar == ' ' ){
			nextChar = transform(nextChar);
			outFile.put(nextChar);
		}else{
			outFile.put(nextChar);
        }

    }
}

char Encryption::transform(char ch) const{
	unsigned char newChar = ch + key;

	if((int)newChar < 32){
		newChar = newChar + 95;
	}

	if((int)newChar > 126){
		newChar = (newChar - 127) + 32;
	}

	return newChar;
}