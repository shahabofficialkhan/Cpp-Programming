   #include <iostream>
   #include  <iomanip>
   using namespace std;

   int main () {
          int a=12;
          int* b=&a;
          int** c =&b;
          cout << "the value of a     " <<setw (5) << a <<endl;
          cout << "the address of a   "<<setw (5) << b <<endl;
          cout << "the value at b is  "<<setw (5) << *b <<endl;
          cout << "the value of a     " <<setw (5)  << &a <<endl;
          cout << "the address of b   "<<setw (5) << c <<endl;
          cout << "the value at c ic  "<<setw (5) << &b <<endl;
          cout << "the value at c ic  "<<setw (5) << **c <<endl;


           return 0;
   }       