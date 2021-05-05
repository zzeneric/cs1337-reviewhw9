#include <iostream>
#include <fstream>

#include "FileFilter.h"
#include "Encryption.h"
#include "Uppercase.h"
#include "Copy.h"

using namespace std;

int main(){
	// Establish file inputs
    ofstream encryptDefaultFile, encrypt12File, encrypt4File;
    ofstream upperFile, copyFile;
	ifstream inFile;
    
    // Ask user for input
    string fileName;
	cin >> fileName;

    // Open files
	inFile.open(fileName);

    // Setup class objects
	Encryption encryptDefault;
    Encryption encryption12;
    Encryption encrypt4;

	UpperCase upperCase;
	Copy copy;

    // Encryption Default
    encryptDefaultFile.open("EncryptionDefault.txt");
	encryptDefault = Encryption();
	encryptDefault.doFilter(inFile, encryptDefaultFile);

    // Reset input file to start
    inFile.clear();
    inFile.seekg(0);
    /*--------------------------------------*/


     // Encryption 12
    encrypt12File.open("Encryption12.txt");
	encryption12 = Encryption(12);
	encryption12.doFilter(inFile, encrypt12File);

    // Reset input file to start
    inFile.clear();
    inFile.seekg(0);
    /*--------------------------------------*/


     // Encryption 4
    encrypt4File.open("Encryption-4.txt");
	encrypt4 = Encryption(-4);
	encrypt4.doFilter(inFile, encrypt4File);

    // Reset input file to start
    inFile.clear();
    inFile.seekg(0);
    /*--------------------------------------*/


    // Uppercase
    upperFile.open("Uppercase.txt");
    upperCase.doFilter(inFile, upperFile);

    // Reset input file to start
    inFile.clear();
    inFile.seekg(0);
    /*--------------------------------------*/


    // Copy
    copyFile.open("Copy.txt");
    copy.doFilter(inFile, copyFile);

    // Reset input file to start
    inFile.clear();
    inFile.seekg(0);
    /*--------------------------------------*/

	return 0;
}