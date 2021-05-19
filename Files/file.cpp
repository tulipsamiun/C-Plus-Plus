#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream MyWriteFile("example.txt"); /// Create File
    
    MyWriteFile << "C++ example File";  // Write to the file;
    MyWriteFile.close();    ///close File
    
    ifstream MyReadeFile("example.txt");              //read the file
    string txt;
    
    while(getline(MyReadeFile, txt)){
        cout << txt;                    // output text
    }
    MyReadeFile.close();               //close the file
    

    return 0;
}
