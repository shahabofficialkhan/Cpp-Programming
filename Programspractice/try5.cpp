   #include <iostream>
   #include  <iomanip>
   #include <string>
   #include <fstream>
   
   using namespace std;
   struct BookRecord {
          string title, author, status;
          int isbn;
      };
   int main () {
          int nb;
          cout << "How many books do you want to add?";
          // nb==number of books
          cin >>nb;
          BookRecord b[nb];
          cin.ignore();
          for (int i =0 ; i < nb ; i++) {
              cout << "Enter the book title: ";
              getline(cin, b[i].title);
              
              cout << "Enter the book author: ";
              getline(cin, b[i].author);
             
              cout << "Enter Book Status: ";
              getline(cin, b[i].status);

              cout << "Enter the ISBN: ";
              cin >> b[i].isbn;

              cin.ignore();

              ofstream file;
                    file.open("data3.txt",ios::app );
                    if (file.is_open()){
                    file <<"\n" <<b[i].title <<"\n"<<b[i].author<<"\n"<<b[i].status <<"\n"<<b[i].isbn << endl;}
                    else 
                     {
                              cout << "Unable to open file";
                     }
 
          }
           return 0;
   }