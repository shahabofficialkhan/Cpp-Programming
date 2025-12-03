   #include <iostream>
   #include <string>
   #include <fstream>
  
     using namespace std;
  
     int main () {
      string st;
      fstream infile("Huz.txt", ios::app);
      infile <<"Hello Welcome to the world of c++";
      infile.close();
      fstream file("Huz.txt", ios::in);
      file >> st;
      file >> st;
      file >> st;
      file.close();
      cout << st ;
     
      return 0;
     }