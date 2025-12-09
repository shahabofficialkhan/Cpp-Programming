   #include <iostream>
   using namespace std;

   int main () {
          //define program
          cout << "We are comparing two number" <<endl;
          //declear variable
         
          int firstnum , secondnum;
         
          //number take from user 
          //prompt message

          cout << "First number"<<endl;
          cin >> firstnum;

          cout << "second number"<<endl;
          cin >> secondnum;

          //For comparing we use if else statement 

          if ( firstnum >secondnum)
                    {cout << "the first number is largar:"<<firstnum<<endl; }

          if ( firstnum <secondnum)
                    {cout << "the Second number is largar:"<<secondnum<<endl; }


          return 0;
   }

