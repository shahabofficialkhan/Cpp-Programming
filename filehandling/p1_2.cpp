#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string str,str1;
  
    fstream infile ("data.txt", ios :: in );
   
    while (infile) {
        getline(infile , str ) ; 
    cout << str<<endl;}

    return 0;
}
