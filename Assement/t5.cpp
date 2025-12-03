#include <iostream>
#include  <iomanip>
using namespace std;
void operatorfun() {
          cout << "1 for addation(+)" << endl;
          cout << "2 for sub(-)" << endl;
          cout << "3 for divsion(/)" << endl;
          cout << "4 for multiplication(*)" << endl;
          cout << "5 for modulus (%)" << endl;
          }
void decfunc( int a, int c, int b )
          {
          switch (b)
                    {
                    case 1:
                              cout << "the addation of two number is " << a + c << endl;
                              break;
                    case 2:

                              cout << "the substraction of two number is " << a - c << endl;
                              break;
                    case 3:   if (c == 0) {
                              cout << "undefined";
                              }
                          else
                              cout << "the Division of two number is " << a / c << endl;
                              break;
                    case 4:
                              cout << "the Multiplication of two number is " << a * c << endl;
                              break;
                    case 5:    if (c == 0) {
                              cout << "undefined";
                              }
                          else
                              cout << "the Modulus of two number is " << a % c << endl;
                              break;

                    default:
                              cout << " invaild ";
                              break;
                    }

          }

int main() {
          int a, b, c;
          cout << "Enter number " << endl;
          cin >> a;
          cout << "Enter number " << endl;
          cin >> c;
          operatorfun();
          cin >> b;
          decfunc( a, c, b );
          return 0;
          }
