   #include <iostream>
   #include <fstream>
   #include <string>
   using namespace std;
   // fstream ;
   // fstream ; file  write 
   // ifstream ; file  read

   int main () {
    // int num =10;

     // out write // in read // app append
    
    
     fstream infile ("filename.txt", ios :: app) ;
     infile << "Hzfa is bad boy" ;
     infile.close();
     string f , s , a  , a1;
     fstream shahab ("filename.txt", ios :: in );
     infile.close();
   
   
   
   
 return 0;
   }