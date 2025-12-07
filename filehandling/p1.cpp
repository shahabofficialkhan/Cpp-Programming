#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string str,str1;
    fstream file("data.txt", ios :: app);  // open file to write
    file << "Hello, World!\n";
    file << "This is a file.\n";
    
    file.close();  // always close the file
    fstream infile ("data.txt", ios :: in );
   
    return 0;
}
