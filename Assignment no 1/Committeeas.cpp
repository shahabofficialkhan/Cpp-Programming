 #include <iostream>
#include <cstdlib>
 #include <string>
using namespace std;
       
        int main ()
            // we are making a committe program
        {  cout << "WELCOME TO COMMITTE PROGRAM" << endl;
          // array of nummembers
          int nummembers ;
          int name;
          

          cout << "How many members would you like to have in your committee?" << endl;
          cin >> nummembers;
          cin.ignore();

          string names[nummembers]; // Array to store names

          for (int  a = 0; a < nummembers; a++)
          {
               cout << "Enter name " << a + 1 << ": ";
               getline(cin, names[nummembers]); // Takes full name
          }
          cout << "The members in your committee are: " << endl;
        
          for (int i = 1; i <= nummembers; i++)
          {
            cout << i<<")" << names[nummembers] <<endl;
          }



          return 0;
        }