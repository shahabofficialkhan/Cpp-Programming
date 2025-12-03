#include <iostream>
#include  <iomanip>
using namespace std;

int main() {
          // declear variable 
          int a;
          cout << "Enter number first even" << endl;
          cin >> a;
          int b;
          cout << "Enter number of even last even" << endl;
          cin >> b;
          int sum = 0;


          for (int x = a; x <= b; x++)
                    {
                    if (x % 2 == 0)

                              {
                              sum = sum + x;
                              cout << x << endl;
                              }

                    }
          cout << "the sum of the even number btw" << a << "and" << b << " ==" << sum << endl;
          return 0;
          }