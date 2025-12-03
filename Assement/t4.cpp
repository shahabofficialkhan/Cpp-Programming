#include <iostream>
#include  <iomanip>
using namespace std;

int main() {

          int b = 0;
          do
                    {
                    int num;
                    cout << "Enter the number ";
                    cin >> num;
                    if (num % 2 != 0 && num % 3 != 0)
                              {                              
                              cout << "the number is prime " << endl;
                              }
                    else {
                              cout << "not prime number" << endl;
                              cout << "Enter any number for again and 0 for exit" << endl;
                              cin >> b;
                              }
                    } while (b > 0);
                    cout << "Thank you for using our program";

          return 0;
          }